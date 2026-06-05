// Write a program to calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
    int limit,i,sum=0;
    
    printf("Enter the limit till which you want to sum: ");
    scanf("%d",&limit);

    for(i=0; i<=limit; i++)
    {
        sum=sum+i;
    }

    printf("Sum of first %d natural numbers= %d",limit,sum);

    return 0;
}