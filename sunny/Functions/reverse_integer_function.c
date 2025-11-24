#include <stdio.h>

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int rev = reverseNumber(num);

    printf("Reverse of %d is %d\n", num, rev);

    return 0;
}
