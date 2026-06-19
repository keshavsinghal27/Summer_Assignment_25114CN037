// WAP TO WRITE FUNCTION TO FIND FACTORIAL


//function definiton
#include <stdio.h>

double factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }

    return num * factorial(num-1);
}

int main()
{
    int n;
    double fact_orial;

    printf("Enter the number : ");
    scanf("%d",&n);

    //function call
    fact_orial=factorial(n);
    printf("The factorial of %d is %.0lf" , n , fact_orial);

    return 0;

}