#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks of %s: ", s[i].name);
        scanf("%f", &s[i].marks);
        sum += s[i].marks;
    }

    average = sum / n;

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\tMarks: %.2f\n", s[i].name, s[i].marks);
    }

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
