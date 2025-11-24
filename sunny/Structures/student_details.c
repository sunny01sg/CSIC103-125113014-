#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Count: ");
    scanf("%d", &n);

    if (n <= 0) return 1;

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\n#%d\n", i + 1);
        
        printf("Roll: ");
        scanf("%d", &students[i].roll_number);
        
        getchar(); 

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        size_t len = 0;
        while(students[i].name[len] != '\0') len++;
        if (len > 0 && students[i].name[len-1] == '\n') {
            students[i].name[len-1] = '\0';
        }

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n%-10s %-20s %-10s\n", "Roll", "Name", "Marks");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", 
               students[i].roll_number, 
               students[i].name, 
               students[i].marks);
    }

    return 0;
}
