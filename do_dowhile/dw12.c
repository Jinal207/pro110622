
#include<stdio.h>


void main()
{
	int i=1,sum=0;
	do
	{
	sum=sum+i;
	printf("\n %d ",i);
                 i+=2;
	}
	while(i<=10);
 	printf("\n sum:%d ",sum);
}