#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int rows, int cols, int original[10][10], int transpose[10][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = original[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int original[10][10];
    int transpose[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    readMatrix(rows, cols, original);

    printf("\nOriginal Matrix:\n");
    printMatrix(rows, cols, original);

    transposeMatrix(rows, cols, original, transpose);

    printf("\nTranspose Matrix:\n");
    printMatrix(cols, rows, transpose);

    return 0;
}
