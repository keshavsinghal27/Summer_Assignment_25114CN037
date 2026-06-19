//WAP to write function for perfect number

#include<stdio.h>


// function definition
int isperfect(int num)
{
    int orignal=num;
    int sumofdivisors=0;
    int i=1; 

    for(i=1 ; i<num ; i++)
    {
        if(num%i==0)
        {
            sumofdivisors=sumofdivisors+i;
        }
    }

    if(sumofdivisors==orignal)
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

    printf("Enter the number : ");
    scanf("%d",&n);

    //function call
    if(isperfect(n))
    {
        printf("The given number %d is perfect",n);
    }

    else
    {
        printf("The given number %d is not perfect",n);
    }

    return 0;
}