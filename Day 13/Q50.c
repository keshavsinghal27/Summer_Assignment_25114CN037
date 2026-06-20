//WAP TO FIND THE SUM AND AVERAGE OF ARRAY

#include <stdio.h>

int main()
{
    int arr[100],n,i;
    int sum=0;
    float average;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: \n",n);

    for(i=1 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    average= (float)sum/n;

    printf("The sum of an array=%d\n",sum);
    printf("The average of an array=%.2f\n",average);

    return 0;
}