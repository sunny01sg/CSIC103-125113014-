#include <stdio.h>

int main() {
    int A[3] = {1, 3, 5};
    int B[3] = {2, 4, 6};
    int C[6];
    int n1 = 3;
    int n2 = 3;
    int n3 = n1 + n2;
    int i, j;

    printf("Array A: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (i = 0; i < n2; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    for (i = 0; i < n1; i++) {
        C[i] = A[i];
    }

    for (j = 0; j < n2; j++) {
        C[i + j] = B[j];
    }

    printf("Merged Array C: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

