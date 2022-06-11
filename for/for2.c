#include<conio.h>
#include<stdio.h>

int main()
{
int i,j;
for(i=1;i<=50;i++)
{
if(i%2!=0)
{
printf("\t%d",i);
}
else
{
j=i*i;
printf("\t%d",j);
}
}
return 0;
}