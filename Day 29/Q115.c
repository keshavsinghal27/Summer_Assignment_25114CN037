// WAP TO CREATE MENU-DRIVEN STRING OPERATIONS SYSTEM

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100];
    int choice, i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                length = strlen(str);
                printf("Length = %d\n", length);
                break;

            case 2:
                strcpy(temp, str);
                strrev(temp);
                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                    {
                        temp[i] = temp[i] - 32;
                    }
                }

                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);
                strrev(temp);

                if(strcmp(str, temp) == 0)
                {
                    printf("String is a Palindrome.\n");
                }
                else
                {
                    printf("String is not a Palindrome.\n");
                }
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