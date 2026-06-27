// WAP TO ROTATE AN ARRAY LEFT

#include <stdio.h>
int main()
{
    int arr[100],i,n,temp;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //store the first element in the temp

    temp=arr[0];

    // shift all elements one position to the left

    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    // place the first element at the last position

    arr[n-1]=temp;

    printf("Array after left rotation:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}