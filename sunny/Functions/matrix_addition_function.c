#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    printf("\nEnter elements of first matrix:\n");
    readMatrix(rows, cols, matrix1);

    printf("\nEnter elements of second matrix:\n");
    readMatrix(rows, cols, matrix2);

    addMatrices(rows, cols, matrix1, matrix2, sum);

    printf("\nSum of matrices:\n");
    printMatrix(rows, cols, sum);

    return 0;
}
