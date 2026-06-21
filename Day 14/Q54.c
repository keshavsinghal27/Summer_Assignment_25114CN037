//WAP TO FREQUENCY OF AN ELEMENT

#include <stdio.h>

int main()
{
    int arr[100],n,i,key;
    int freq;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    //for inputing the array
    printf("The elements of an array are: ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("ENTER THE ELEMENT WHOSE FREQUENCY IS TO BE FOUND: ");
    scanf("%d",&key);

    //loop for calculating the frequency of the asked element
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==key)
        {
            freq++;
        }
    }

    printf("Frequency of %d is %d",key,freq);

    return 0;
}