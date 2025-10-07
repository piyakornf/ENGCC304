#include<stdio.h>

int main() {
    char employeeID[11];
    int workinghrs = 0;
    float Salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workinghrs);

    printf("Salary amount/hr:");
    scanf("%f", &Salary);
    
    printf("Expected Output:\n");
    printf("Employee ID: %s\n", employeeID);
    printf("Salary = U$ %.2f\n", Salary * workinghrs);
}