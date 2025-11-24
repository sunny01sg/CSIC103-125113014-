#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a positive natural number.\n");
        return 1;
    }

    for (i = 1; i <= N; ++i) {
        sum += i;
    }

    printf("The sum of natural numbers up to %d is: %d\n", N, sum);

    return 0;
}
