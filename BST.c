#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* insert(struct node* root,int a);
struct node* createnode(int a);
void inorder(struct node* root);
void preorder(struct node* root);
void postorder(struct node* root);
int main()
{
    struct node* root=NULL;
    int n,a;
    while(1)
    {
        printf("1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.exit\n");
        printf("Enter a choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Insert a number: ");
            scanf("%d",&a);
            root=insert(root,a);
            break;
            case 2:
            inorder(root);
            break;
            case 3:
            preorder(root);
            break;
            case 4:
            postorder(root);
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("invalid choice\n");
            break;
        }
    }
}
struct node* createnode(int a)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=a;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root,int a)
{
    if(root==NULL)
    return createnode(a);
    if(a<root->data)
    root->left=insert(root->left,a);
    else if(a>root->data)
    root->right=insert(root->right,a);
    return root;
}
void inorder(struct node* root)
{
    if(root!=NULL)
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
