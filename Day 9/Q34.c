// WAP A PROGRAM TO PRINT A REVERSE NUMBER TRIANGLE

#include <stdio.h>

int main()
{
    int row , i , j ;

    printf("Enter the row : ");
    scanf("%d",&row);

    for(i=row ; i>=1 ; i--)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }

    return 0;
}