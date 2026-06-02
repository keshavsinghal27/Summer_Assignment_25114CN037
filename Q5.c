//Write a program to Find sum of digits of a given number

#include <stdio.h>
int main()
{
    int num,digit,sum=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        digit= num%10;      // for getting last digit
        sum= sum+digit;     // for addition of digits
        num= num/10 ;       // for removing last digit

    }

    printf("Sum of digits= %d",sum);

    return 0;

}