#include<stdio.h>
    int main()
{
    int i=1,k=1;
   do
        {
              int j=1;
               do
              {
               printf("\t%c",k+64);
	j++;
                 k++;
              } while(j<=5);
     
        i++;
        printf("\n");
        }    while(i<=5);
}