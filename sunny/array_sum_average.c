#include <stdio.h>

int main() {
    int i;
    double arr[10];
    double sum = 0.0;
    double average;

    printf("Enter 10 numbers to calculate their sum and average:\n");

    for (i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    average = sum / 10;

    printf("Sum of array elements = %.2lf\n", sum);
    printf("Average of array elements = %.2lf\n", average);

    return 0;
} 
