/*c program to genarate fibonacci series of n numbers*/
#include<stdio.h>
int main()
{
    int n,i,n1=0,n2=1,n3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", n1, n2);
    for (i = 0; i <= n; i++)
    {
        if(i<=1)
        printf(" %d",i);
        else
        {
            n3 = n1 + n2;
            printf("%d \n",n3);
            n1=n2;
            n2=n3;
        }
    }
    return 0;
}