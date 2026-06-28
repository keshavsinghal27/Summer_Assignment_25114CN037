// WAP TO REMOVE DUPLICATE CHARACTERS FROM A STRING

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove duplicate characters
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j] && str[i] != ' ' && str[i] != '\n')
            {
                // Shift characters to the left
                for(k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }

                j--;
            }
        }
    }

    printf("String after removing duplicates: %s", str);

    return 0;
}