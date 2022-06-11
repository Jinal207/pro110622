#include<stdio.h>

int main()
{
int i=1,j=1;
do
{
printf("\t%d",i*j++);
i*=2;
}
while(i<=50);

}