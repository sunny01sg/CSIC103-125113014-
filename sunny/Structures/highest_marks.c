#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    int max_marks_index = 0; 

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students. Exiting.\n");
        return 1;
    }

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nDetails for Student #%d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        
        getchar(); 

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len-1] == '\n') {
            students[i].name[len-1] = '\0';
        }

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[max_marks_index].marks) {
            max_marks_index = i; 
        }
    }

    printf("\n==================================\n");
    printf("STUDENT WITH THE HIGHEST MARKS\n");
    printf("==================================\n");
    printf("Name:        %s\n", students[max_marks_index].name);
    printf("Roll Number: %d\n", students[max_marks_index].roll_number);
    printf("Marks:       %.2f\n", students[max_marks_index].marks);
    printf("==================================\n");

    return 0;
}
