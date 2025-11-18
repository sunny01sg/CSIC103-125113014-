#include <stdio.h>

void countFrequency(int arr[], int n) {
    int freq[n];
    int i, j, count;

    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }

    for (i = 0; i < n; i++) {
        count = 1;

        if (freq[i] == -1) {
            continue;
        }

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }

        if (freq[i] != -1) {
            freq[i] = count;
        }
    }

    printf("\n--- Element Frequency ---\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("Element %d appears %d time(s)\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int data[] = {10, 30, 10, 20, 10, 20, 30, 50, 60, 10};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    countFrequency(data, n);

    return 0;
}
