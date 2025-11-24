#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d\tName: %s\tMarks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    return 0;
}
