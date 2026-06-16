//write a program to find whether the number is palindrome or not

#include <stdio.h>

int main()
{
    int num, original, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev)
        printf("%d is a palindrome number.", original);
    else
        printf("%d is not a palindrome number.", original);

    return 0;
}