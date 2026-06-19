// WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS

#include <stdio.h>

//function definition

int sum(int a , int b)
{
    return a + b ;
}


int main()
{
    int num1 , num2 , result ;
    
    printf("Enter two numbers: ");
    scanf("%d %d" , &num1 , &num2);

    result= sum(num1,num2);  //function call

    printf("The addition of two numbers: %d ",result);

    return 0;

}