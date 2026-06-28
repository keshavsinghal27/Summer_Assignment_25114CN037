// WAP TO BINARY SEARCH

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int low, high, mid, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found.");

    return 0;
}