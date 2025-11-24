#include <stdio.h>

int main() {
    int rows = 2;
    int cols = 3;
    int i, j;

    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int C[2][3];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resulting Matrix C (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
