// Write a program to count the digits in a number

#include <stdio.h>

int main()
{
    int num,count=0,i;

    printf("Enter the number to count its digit: ");
    scanf("%d",&num);

    if(num==0)
    {
        count = 1;
    }

    else
    {
        while(num!=0)
        {
            num = num/10;
            count= count+1;
        }

    }

    printf("Number of digits is %d",count);

    return 0;
}