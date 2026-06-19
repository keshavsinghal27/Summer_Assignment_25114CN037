//WAP to write function for Fibonacci

#include <stdio.h>

int fibo(int n)
{
    int a=0,b=1,c,i;

    if(n==1)
    {
        return a;
    }

    if(n==2)
    {
        return b;
    }

    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

int main()
{
    int n;

    printf("Enter the term: ");
    scanf("%d",&n);

    printf("Fibonacci number= %d ",fibo(n));

    return 0;
}