//WAP to find the missing number in array

#include <stdio.h>
int main()
{
    int arr[100],n,i;
    int total_sum=0,arr_sum=0,missing;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements(one number is missing):\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        arr_sum=arr_sum+arr[i];
    }

    //Sum of elements from 1 to n;
    total_sum=(n*(n+1))/2;

    //Missing number
    missing=total_sum-arr_sum;

    printf("Missing number=%d",missing);

    return 0;
}