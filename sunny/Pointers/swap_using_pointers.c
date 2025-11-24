#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
