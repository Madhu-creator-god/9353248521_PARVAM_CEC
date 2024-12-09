/*c program to summation of number*/
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a positive number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        }
        printf("Summation of number is:%d",sum);
        return 0;
}
