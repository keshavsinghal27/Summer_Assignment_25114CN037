// MINI PROJECT: STUDENT RECORD MANAGEMENT SYSTEM
// USING ARRAYS, STRINGS AND FUNCTIONS

#include <stdio.h>
#include <string.h>

char name[100][50];
int roll[100];
float marks[100];
int n = 0;

// Function to add students
void addStudent()
{
    int i, count;

    printf("How many students do you want to add? ");
    scanf("%d", &count);

    for(i = 0; i < count; i++)
    {
        printf("\nEnter details of Student %d\n", n + 1);

        printf("Name: ");
        scanf("%s", name[n]);

        printf("Roll Number: ");
        scanf("%d", &roll[n]);

        printf("Marks: ");
        scanf("%f", &marks[n]);

        n++;
    }
}

// Function to display students
void displayStudent()
{
    int i;

    if(n == 0)
    {
        printf("No student records found.\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", name[i]);
        printf("Roll Number : %d\n", roll[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

// Function to search student
void searchStudent()
{
    int i, searchRoll;

    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Name        : %s\n", name[i]);
            printf("Roll Number : %d\n", roll[i]);
            printf("Marks       : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}