#include<stdio.h>
    int main()
{
    int i,j,space=5;
    for(i=1;i<=5;i++)
   {   
    for(j=1;j<=space;j++)
      printf(" ");
      for(j=1;j<=i;j++)
       {
          printf(" *");         
       }
space--;
          printf("\n");
    }
}