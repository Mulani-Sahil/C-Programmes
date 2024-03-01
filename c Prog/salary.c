#include <stdio.h>

int main() {
    // Declare variables
    int employee_id;
    float basic_salary, hra, da, professional_tax, take_home_salary;

    // Input employee ID and basic salary
    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Calculate HRA (10% of basic salary)
    hra = 0.10 * basic_salary;

    // Calculate DA (30% of basic salary)
    da = 0.30 * basic_salary;

    // Calculate professional tax (5% of basic salary)
    professional_tax = 0.05 * basic_salary;

    // Calculate take-home salary
    take_home_salary = basic_salary + hra + da - professional_tax;

    // Display the result
    printf("Employee ID: %d\n", employee_id);
    printf("Basic Salary: $%.2f\n", basic_salary);
    printf("HRA: $%.2f\n", hra);
    printf("DA: $%.2f\n", da);
    printf("Professional Tax: $%.2f\n", professional_tax);
    printf("Take-Home Salary: $%.2f\n", take_home_salary);

    return 0;
}

