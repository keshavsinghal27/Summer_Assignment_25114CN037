// WAP TO WRITE FUNCTION TO FIND MAXIMUM

#include <stdio.h>

// function declaration and definiton
int max(int a , int b)
{
    if(a>b)
    {
        return a;
    }

    else
    {
        return b;
    }
}

int main()
{
    int num1 , num2 , maximum;

    printf("Enter the first number : ");
    scanf("%d",&num1);
    
    printf("Enter the second number : ");
    scanf("%d",&num2);

    maximum = max(num1 , num2);  //function call

    printf("The maximum between two number is : %d", maximum);


    return 0;
}