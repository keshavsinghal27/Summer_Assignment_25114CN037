// WAP to count set bits in a number 

#include <stdio.h>

int main()
{
    int num,count=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    while(num>0)
    {
        count= count+ num%2;
        num= num/2;
    }

    printf("The set bits in a number  = %d ", count);

    return 0; 
}