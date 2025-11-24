#include <stdio.h>

int main() {
    int i;
    double arr[10];
    double max;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %.2lf\n", max);

    return 0;
}
