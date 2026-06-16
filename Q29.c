// WAP to print half pyramid patter

#include <stdio.h>

int main()
{
    int i,j,rows;

    printf("Enter the number of rows you want to print: ");
    scanf("%d",&rows);

    for(i=1 ; i<=rows ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
