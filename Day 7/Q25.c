// WAP to recursive factorial

#include <stdio.h>

double factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    else 
    {
        return n*factorial(n-1);

    }
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Factorial is not defined for negative number");

    }

    else
    {
        printf("factorial of %d = %lf\n",n,factorial(n));
    }

    return 0;
}

