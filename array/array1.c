#include<stdio.h>

int main()
{
	int a[5],i,b[5],sum[5];
 for(i=0;i<5;i++)
{
printf("enter a[%d] : ",i);
scanf("%d",&a[i]);

}
 
for(i=0;i<5;i++)
{
printf("enter b[%d] : ",i);
scanf("%d",&b[i]);
}      

for(i=0;i<5;i++)
{
printf("\na:[%d] : %d ",i,a[i]);
}       

for(i=0;i<5;i++)
{
printf("\nb:[%d] : %d ",i,b[i]);
}       
  
printf("\n");

for(i=0;i<5;i++)
{
sum[i]=a[i]+b[i];
printf("\na:[%d] : %d ",i,a[i]);
printf("\tb:[%d] : %d ",i,b[i]);
printf("\tsum:[%d] : %d ",i,sum[i]);
}       

}

