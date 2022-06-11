#include<stdio.h>

int main()
{
	int a[3][3],i,j,k,b[3][3],sum=0;
 for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
{

printf("enter a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}
 
 for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
{printf("enter b[%d][%d] : ",i,j);
scanf("%d",&b[i][j]);
}
}
 
printf("\n\tmatrix A:\t\t\t\tmartix B: \t\t\t\tSUM: \n"); 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d ",a[i][j]);
}

printf("\t\t"); 

for(j=0;j<3;j++)
{
printf("\t%d ",b[i][j]);
}   

printf("\t\t"); 

for(j=0;j<3;j++)
{
sum=a[i][j]+b[i][j];
printf("\t%d ",sum);
}     
printf("\n"); 
}
}

