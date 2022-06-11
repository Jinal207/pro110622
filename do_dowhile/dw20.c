#include<stdio.h>
int main()
{
int i=0,j=0,k=1,l;
do
{
l=j+k;
printf("\t%d",l);
j=k;
k=l;
i++;
}
while(i<=20);
return 0;
}
