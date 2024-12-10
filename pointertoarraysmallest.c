/*c prgram to find the smallest number in an array using a pointer*/
#include<stdio.h>
int main()
{
	int size=0,a[100],i,*small=a;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",a+i++));
    for(i=1;i<size;i++)
    {
        if(*small >a[i])
        small=&a[i];
    }
    printf("Smallest element is %d",*small);
    return 0;
}