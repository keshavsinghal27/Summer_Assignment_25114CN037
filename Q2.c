// Write a program to print multiplication table of a given number

#include <stdio.h>
int main()
{
    int num,i,limit,table=1;

    printf("Enter the number , table of which you want to print : ");
    scanf("%d",&num);

    printf("Enter the limit till you want a table: ");
    scanf("%d",&limit);

    for(i=1 ;i<=limit ; i++)
    {
        table=num*i;
        printf("%d * %d = %d\n",num ,i,table);
    }

    

    return 0;
}
