#include<stdio.h>
int main()
{
int i;
for(i=0;i<26;i++)
{
if(i%2==0)
{
printf("\t%c",i+65+32);
}
else
{
printf("\t%c",i+65);
}
}
return 0;
}
