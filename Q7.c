// Write a program to find product of digits

#include <stdio.h>
int main()
{
    int num,digit,product=1;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        digit=num%10;
        product=product*digit;
        num=num/10;
    }

    printf("The product of digits=%d",product);

    return 0;
}