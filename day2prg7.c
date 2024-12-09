/*to print from 1 -4 9 -16 25 -36*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    printf("the series of squarea up to %d is\n");
    for(int i =1;i<=n;i++)
    if(i%2 ==0)
   {
    printf("%d\n", -i*i);
   }
   else
   {
    printf("%d\n", i*i);
   }
   return 0;
}