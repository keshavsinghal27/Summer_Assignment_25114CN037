//Write a program to count even and odd elements

#include<stdio.h>

int main()
{
    int arr[100],n,i;
    int odd_count=0,even_count=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("enter the elements of array: ");

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Number of even elements in array = %d\n",even_count);
    printf("Number of odd elements in array = %d",odd_count);
    
    return 0;
}

