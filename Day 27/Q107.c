// WAP TO CREATE SALARY MANAGEMENT SYSTEM

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, netSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        // Calculate HRA, DA and Net Salary
        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].netSalary = emp[i].basic + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n----- SALARY DETAILS -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Basic Salary: %.2f\n", emp[i].basic);
        printf("HRA (20%%)   : %.2f\n", emp[i].hra);
        printf("DA (10%%)    : %.2f\n", emp[i].da);
        printf("Net Salary  : %.2f\n", emp[i].netSalary);
    }

    return 0;
}