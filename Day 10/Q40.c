// WAP to print character pyramid

#include <stdio.h>

int main()
{
    int n,i,j;
    
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        // for printing spaces
        for(j=1 ; j<=n-i ; j++)
        {
            printf(" ");
        }

        // For printing characters in ascending order
        for(j=1 ; j<=i ; j++)
        {
            printf("%c",j+64);
        }

        //FOR PRINTING CHARACTERS IN DESCENDING ORDER
        for(j=i-1 ; j>=1 ; j--)
        {
            printf("%c",j+64);
        }

        printf("\n");
    }

    return 0;

}
