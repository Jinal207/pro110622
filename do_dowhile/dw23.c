#include<stdio.h>
    int main()
{
    int i=1,j;
           do
            {
              j=1;
               do
              {
               printf("\t%d",i);
	j++;
               } while(j<=5);
  
            i++;
       printf("\n");
        }while(i<=5);
}