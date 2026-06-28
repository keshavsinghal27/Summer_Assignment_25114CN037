// WAP TO CREATE MINI LIBRARY SYSTEM

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book book[100];
    int n, i, choice, searchId, found;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Book Name: ");
        scanf("%s", book[i].name);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- BOOK RECORDS -----\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("Book ID     : %d\n", book[i].id);
                    printf("Book Name   : %s\n", book[i].name);
                    printf("Author Name : %s\n", book[i].author);
                }
                break;

            case 2:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID     : %d\n", book[i].id);
                        printf("Book Name   : %s\n", book[i].name);
                        printf("Author Name : %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}