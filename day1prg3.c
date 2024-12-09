#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two integers a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
}