#include <stdio.h>
struct Salary {
    float basic;
    float bonus;
    float deduction;
};

struct Employee {
    int id;
    char name[50];
    struct Salary sal;
};

float calculateNetSalary(struct Salary s) {
    return s.basic + s.bonus - s.deduction;
}

void displayDetails(struct Employee e) {
    float net = calculateNetSalary(e.sal);
    printf("\nEmployee ID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nBasic Pay: %.2f", e.sal.basic);
    printf("\nBonus: %.2f", e.sal.bonus);
    printf("\nDeduction: %.2f", e.sal.deduction);
    printf("\nNet Salary: %.2f\n", net);
}

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Basic Pay: ");
    scanf("%f", &e.sal.basic);

    printf("Enter Bonus: ");
    scanf("%f", &e.sal.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &e.sal.deduction);

    displayDetails(e);
    return 0;
}

