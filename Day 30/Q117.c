// WAP TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS

#include <stdio.h>

int main()
{
    char name[100][50];
    int roll[100];
    float marks[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", name[i]);
        printf("Roll Number : %d\n", roll[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }

    return 0;
}