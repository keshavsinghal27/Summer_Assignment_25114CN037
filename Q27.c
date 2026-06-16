// WAP to recursive sum of digits.

#include <stdio.h>

int sumofdigits(int n)
{
    if (n==0)
    {
        return 0 ;
    }

    return (n%10) + sumofdigits(n / 10);
}

int main()
{
    int n ;

    printf("Enter the terms till which you want an sum: ");
    scanf("%d",&n);

    printf("The sum of digits of number %d is %d",n,sumofdigits(n));


    return 0;
}
