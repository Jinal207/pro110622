#include<stdio.h>

int main()
{
	int a[10],i,j=0,k=0,esum=0,osum=0;

	for(i=0;i<10;i++)
	{
	printf("enter a[%d]:",i);
	scanf("%d",&a[i]);	
	}
	
 for(i=0;i<10;i+=2)
{
esum=esum+a[i];
 }
 printf("\n esum:%d",esum);

for(i=1;i<10;i+=2)
{
osum=osum+a[i];
}
printf("\n osum:%d",osum);

for(i=0;i<=10;i+=2)
{
j=j+i;
}
printf("\n esum element:%d",j);

for(i=1;i<=10;i+=2)
{
k=k+i;
}
printf("\n osum element:%d",k);

printf("\n sum:%d",j+k);
}









