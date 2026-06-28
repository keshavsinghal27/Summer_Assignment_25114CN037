//WAP TO FIND MAXIMUM FREQUENCY ELEMENT

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int maxFreq = 0, maxElement;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        // Skip if element is already counted
        if(arr[i] == -1)
            continue;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;   // Mark duplicate as visited
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}