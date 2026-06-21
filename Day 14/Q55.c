//WAP TO SECOND LARGEST ELEMENT

#include <stdio.h>

int main()
{
    int arr[100],n,i;
    int largest,sec_largest;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of an array: ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    largest=sec_largest=arr[0];

    for(i=1 ; i<n ; i++)
    {
        if(arr[i]>largest)
        {
            sec_largest=largest;
            largest=arr[i];
        }

        else if(arr[i]>sec_largest&&arr[i]!=largest)
        {
            sec_largest=arr[i];
        }
    }

    printf("Second largest =%d\n",sec_largest);
    printf("largest= %d",largest);

    return 0;
}


