// Write a program to find the factorial of a number

#include <stdio.h>

int main()
{
    int num,i;
    int fact=1;

    printf("Enter the number of which you want to find factorial: ");
    scanf("%d",&num);

    for(i=1 ; i<=num ; i++)
    {
        fact=fact*i;
    }

    printf("factorial of %d = %d",num,fact);

    return 0;
}