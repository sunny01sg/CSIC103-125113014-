#include <stdio.h>

int main() {
    int n, i;
    double factorial = 1.0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (n == 0) {
        printf("Factorial of 0 is 1.00.\n");
    } 
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        // Use %%lf for printing double
        printf("Factorial of %d is %.0lf.\n", n, factorial);
    }

    return 0;
}
