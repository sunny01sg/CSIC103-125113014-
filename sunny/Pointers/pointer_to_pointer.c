#include <stdio.h>

int main() {
    int num;
    int *ptr;
    int **pptr;

    printf("Enter an integer: ");
    scanf("%d", &num);

    ptr = &num;
    pptr = &ptr;

    printf("\nValue of num = %d\n", num);
    printf("Value of num using single pointer = %d\n", *ptr);
    printf("Value of num using pointer to pointer = %d\n", **pptr);

    printf("\nModifying num using pointer to pointer...\n");
    **pptr = **pptr + 10;

    printf("Updated value of num = %d\n", num);

    return 0;
}
