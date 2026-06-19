//WAP TO WRITE FUNCTION TO CHECK PRIME

#include <stdio.h>

int isprime(int num)
{

    int i;
    if(num<=1)
    {
        return 0;
    }

    else
    {
        for(i=2 ; i<num ; i++)
        {
            if (num%i==0)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    if(isprime(n))
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }

    return 0;
}