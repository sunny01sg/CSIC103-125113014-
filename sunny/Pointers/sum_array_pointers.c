#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
    }

    for (i = 0; i < n; i++) {
        sum += *(p + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
