//WAP TO FIND DUPLICATES IN ARRAY

#include<stdio.h>

int main()
{
    int arr[100],n,i,j;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements are:\n");

    //loop for finding duplicate elements

    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }

    return 0;
}