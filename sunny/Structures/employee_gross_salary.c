#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float da;
    float hra;
    float gross;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    printf("Enter DA: ");
    scanf("%f", &e.da);

    printf("Enter HRA: ");
    scanf("%f", &e.hra);

    e.gross = e.basic + e.da + e.hra;

    printf("\nEmployee Name: %s\n", e.name);
    printf("Gross Salary: %.2f\n", e.gross);

    return 0;
}

