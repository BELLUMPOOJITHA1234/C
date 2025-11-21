#include<stdio.h>
void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void findTrans(int rows, int cols, int matrix[rows][cols]);

int main() {
    int rows, cols, i, j;
    scanf("%d%d", &rows, &cols);
    int A[rows][cols];
    printf("Enter the %d elements\n", (rows * cols));
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Given matrix A is:\n");
    displayMatrix(rows, cols, A);  
    findTrans(rows, cols, A);      

    return 0;
}

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);  
        }
        printf("\n");  
    }
}

void findTrans(int rows, int cols, int matrix[rows][cols]) {
    int T[cols][rows], i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            T[j][i] = matrix[i][j];  
        }
    }
    printf("Transpose of given matrix:\n");
    displayMatrix(cols, rows, T);  
}

