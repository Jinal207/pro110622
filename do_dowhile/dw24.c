#include<stdio.h>

    int main()
{
    int i=5;
    do
   {
     int j=5;
           do
        {
           printf("\t%d",i);
            j--;
         }while(j>=1);
     printf("\n");
     i--;
     }
            
   while(i>=1);
  
}