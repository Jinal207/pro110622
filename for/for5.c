#include<stdio.h>
int main()
{
int i,j=0,k=1,l;
for(i=0;i<=20;i++)
{
l=j+k;
printf("\t%d",l);
j=k;
k=l;
}
return 0;
}
