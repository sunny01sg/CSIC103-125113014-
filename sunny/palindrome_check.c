#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_n = n; 

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original_n == reversed) {
        printf("%d is a palindrome number.\n", original_n);
    } else {
        printf("%d is NOT a palindrome number.\n", original_n);
    }

    return 0;
}
