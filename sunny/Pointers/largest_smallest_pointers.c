#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", p + i);
    }

    int largest = *p;
    int smallest = *p;

    for (i = 1; i < n; i++) {
        if (*(p + i) > largest)
            largest = *(p + i);
        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
