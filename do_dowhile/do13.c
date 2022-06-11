
#include<stdio.h>


void main()
{
	int i=0,sum=0;
	do
	{
	sum=sum+i;
	printf("\n %d ",i+=2);
	}
	while(i<=10);
 	printf("\n sum:%d ",sum);
}