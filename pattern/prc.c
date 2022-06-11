#include<stdio.h>
    int main()
{
    int i,j,space;
    for(i=1;i<=5;i++)
   {   
         for(j=1;j<=i;j++)
       {
                  printf(" *",i);         
        for(space=1;space<=j;space++)
{

printf(" ");
}
}
          printf("\n");
    }
}