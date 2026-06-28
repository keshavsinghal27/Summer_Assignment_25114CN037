//WAP TO REMOVE DUPLICATES FROM ARRAY

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift elements to the left
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;    // Reduce array size
                j--;    // Check the current position again
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}