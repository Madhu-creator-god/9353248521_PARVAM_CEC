/*c program to print all powers of 2*/
#include<stdio.h>
int main()
{
    int limit;
    printf("enter the maximum limit for power 2:");
    scanf("%d",&limit);
    printf("powers of 2 upto %d are:\n",limit);
    for (int power = 1; power <= limit; power *= 2)
    {
        printf("%d\n",power);
    }
    return 0;
}