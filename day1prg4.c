#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%5 == 0)
    {
        printf("The number is divisible by 5\n",n);
    }
    else
    {
        printf("The number in not divisible by 5\n",n);
    }
}