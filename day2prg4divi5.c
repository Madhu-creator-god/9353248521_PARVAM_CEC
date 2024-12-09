/*c program find if number is divisible by 5*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the range of number");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    if(i%5==0)
    printf("%d, ",i);
    return 0;
}