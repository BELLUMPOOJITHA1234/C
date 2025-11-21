#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
typedef struct Queue {
    Node** array;
    int front;
    int rear;
    int capacity;
    int size;
} Queue;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (!queue) {
        printf("Memory error\n");
        return NULL;
    }
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (Node*)malloc(queue->capacity * sizeof(Node));
    return queue;
}
int isEmpty(Queue* queue) {
    return queue->size == 0;
}
void enqueue(Queue* queue, Node* node) {
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = node;
    queue->size = queue->size + 1;
}
Node* dequeue(Queue* queue) {
    Node* temp = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return temp;
}
void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    Queue* queue = createQueue(100);
    enqueue(queue, root);

    while (!isEmpty(queue)) {
        Node* temp = dequeue(queue);
        printf("%d ", temp->data);

        if (temp->left != NULL) {
            enqueue(queue, temp->left);
        }
        if (temp->right != NULL) {
            enqueue(queue, temp->right);
        }
    }
    free(queue->array);
    free(queue);
}
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

int main() {
    Node* root = NULL;
    root = insertNode(root,10);
    root = insertNode(root,20);
    root = insertNode(root,30);
    printf("Level Order Traversal: ");
    levelOrderTraversal(root);

    return 0;
}
