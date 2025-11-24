#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    struct Employee *ptr;

    ptr = &emp;

    printf("Enter employee name: ");
    scanf("%s", ptr->name);

    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    printf("\nUpdating salary by 10%%...\n");
    ptr->salary = ptr->salary * 1.10;

    printf("\nUpdated Employee Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
