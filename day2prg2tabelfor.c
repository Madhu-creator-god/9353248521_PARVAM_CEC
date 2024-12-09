/*c program to print multiplication table of a number*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number for multiplication table:");
    scanf("%d",&number);
    printf("using for loop\n");
    for(int x=10;x>=1;x--)
    {
        printf("%dx%d=%d\n",number,x,number*x);
    }
    return 0;
    }
