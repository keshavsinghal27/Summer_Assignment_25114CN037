// WAP TO LINEAR SEARCH

#include <stdio.h>

int main()
{
    int arr[100],n,i,key,found=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element that you want to search: ");
    scanf("%d",&key);

    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==key)
        {
            found=1;
            printf("Element found at position %d\n",i+1);
            break;
        }
    }

    if(found==0)
    {
        printf("Element not found\n");
    }

    return 0;
}