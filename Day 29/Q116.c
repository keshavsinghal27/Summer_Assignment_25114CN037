// WAP TO CREATE INVENTORY MANAGEMENT SYSTEM

#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product product[100];
    int n, i;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    // Input product details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &product[i].id);

        printf("Product Name: ");
        scanf("%s", product[i].name);

        printf("Quantity: ");
        scanf("%d", &product[i].quantity);

        printf("Price: ");
        scanf("%f", &product[i].price);
    }

    // Display product details
    printf("\n----- INVENTORY RECORDS -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID   : %d\n", product[i].id);
        printf("Product Name : %s\n", product[i].name);
        printf("Quantity     : %d\n", product[i].quantity);
        printf("Price        : %.2f\n", product[i].price);
    }

    return 0;
}