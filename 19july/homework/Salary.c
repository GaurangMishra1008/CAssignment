#include <stdio.h>
int main() {
    int salary=50000,holidays,finalSalary;
    printf("Enter the number of holidays: ");
    scanf("%d", &holidays);
    if (holidays == 1) {
        finalSalary = salary;
    } else if (holidays >= 2 && holidays <= 5) {
        finalSalary = salary - (salary/100*5);
    } else if (holidays >= 6 && holidays <= 14) {
        finalSalary = salary - (salary/100*10);
    } else if (holidays >= 15) {
        finalSalary = salary - (salary/100*50);
    } else {
        printf("Invalid holidays.\n");
    }
    printf("Salary: %d\n", finalSalary);

    return 0;
}
