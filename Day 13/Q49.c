// Write a program to input and display array . 

#include <stdio.h>

int main()
{
    int arr[100];
    int n,i;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    
    printf("Enter the elements of an array: ");
    //loop for inputing the elements
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements of array are: ");
    //loop for displaying the elements
    for(i=0 ; i<n ; i++)
    {
        printf( "%d ",arr[i]);
    }

    return 0;


}