#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum of numbers = %d\n", sum);
        printf("Average of numbers = %.2f\n", average);
    }

    return 0;
}
