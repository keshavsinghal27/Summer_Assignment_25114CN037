// WAP to write function for palindrome

#include <stdio.h>

//funtion definition

int ispalindrome(int num)

{
    int orignal=num;
    int reverse=0;

    while(num>0)
    {
        reverse=reverse*10 + (num%10);
        num = num / 10;
    }

    if(orignal==reverse)
    {
        return 1;
    }

    else
    {
        return 0;
    }
 }


int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    //function call

    if(ispalindrome(n))
    {
        printf("The number %d is palindrome",n);
    }

    else
    {
        printf("the number %d is not palindrome",n);
    }

    return 0;
}