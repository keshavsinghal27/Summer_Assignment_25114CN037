// WAP TO FIND FIRST REPEATING CHARACTER

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        // Ignore spaces and newline
        if(str[i] == ' ' || str[i] == '\n')
            continue;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("First repeating character = %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.");

    return 0;
}