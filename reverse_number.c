#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    int originalNum = num;

    do {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    } while (num != 0);

    printf("The reverse of %d is %d\n", originalNum, reversedNum);

    return 0;
}