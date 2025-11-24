#include <stdio.h>

void callByValue(int x) {
    x = x + 10;
    printf("Inside callByValue, x = %d\n", x);
}

void callByReference(int *x) {
    *x = *x + 10;
    printf("Inside callByReference, x = %d\n", *x);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nOriginal value of num = %d\n", num);

    callByValue(num);
    printf("After callByValue, num = %d\n", num);

    callByReference(&num);
    printf("After callByReference, num = %d\n", num);

    return 0;
}
