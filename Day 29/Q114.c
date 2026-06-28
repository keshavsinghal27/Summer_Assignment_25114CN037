// WAP TO CREATE MENU-DRIVEN ARRAY OPERATIONS SYSTEM

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice;
    int largest, smallest, sum;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Find Largest Element\n");
        printf("3. Find Smallest Element\n");
        printf("4. Find Sum of Elements\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 3:
                smallest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }
                printf("Smallest Element = %d\n", smallest);
                break;

            case 4:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum of Elements = %d\n", sum);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}