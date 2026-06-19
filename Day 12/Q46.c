// WAP to write function for armstrong

#include <math.h>
#include <stdio.h>

int isarmstrong(int num)
{
    int orignal=num;
    int temp=num;
    int arm=0,count=0,rem;

    while(temp>0)
    {
        count++;
        temp=temp/10;
    }

    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        arm=arm+ pow(rem,count);
        temp=temp/10;
    }

    if(arm==orignal)
    {
        return 1;
    }

    else 
    {
        return 0;
    }

}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(isarmstrong(n))
    {
        printf("The given number %d is armstrong",n);
    }
    else
    {
        printf("The given number %d is not armstrong",n);
    }

    return 0;
}