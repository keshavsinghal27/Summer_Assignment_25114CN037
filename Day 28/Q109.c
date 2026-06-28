// WAP TO CREATE LIBRARY MANAGEMENT SYSTEM

#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[100];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    // Display book details
    printf("\n----- LIBRARY RECORDS -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", book[i].bookId);
        printf("Book Title  : %s\n", book[i].title);
        printf("Author Name : %s\n", book[i].author);
    }

    return 0;
}