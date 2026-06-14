//Write a program to Print prime numbers in a range

#include <stdio.h>

int main()
{
    int start, end, i, j, count;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        count = 0;

        if (i <= 1)
            continue;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", i);
    }

    return 0;
}