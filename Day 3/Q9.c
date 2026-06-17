// Write a program to check whether a number is prime.

#include <stdio.h>
int main()
{
    int num,i,count=0;

    printf("Enter the number which is to be checked: ");
    scanf("%d",&num);

    if(num==1)
    {
        printf("Given number is not prime");

    }

    else
    {
        for(i=1 ; i<=num ; i++)
        {
            if(num%i==0)
            {
                count=count+1;
            }
        }

        if (count==2)
        {
            printf("%d is a prime number",num);
        }

        else
        {
            printf("%d is not a prime number",num);
        }
    }


    return 0;
}