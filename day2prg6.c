/*to print from 1 4 9 16 25 36.....n*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("the series of squarea up to %d is\n");
    for(int i =1;i<=n;i++)
    printf("%d ",i*i);
    return 0;
}