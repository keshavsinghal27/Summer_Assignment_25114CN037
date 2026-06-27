// WAP TO ROTATE ARRAY RIGHT

#include <stdio.h>

int main()
{
    int arr[100],n,i,temp;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of an array: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // for storing the last element value for right shifting it 
    temp=arr[n-1];

    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }

    // for placing the last element in first position

    arr[0]=temp;

    // for printing the array after right rotation
    printf("the array after rotating it right: \n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;

}