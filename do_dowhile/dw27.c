#include<stdio.h>
    int main()
{
    int i=1,k=1;
       do
        {
              int j=1;
             do
              {
               printf("\t%d",k);
	j++;
              } while(j<=5);
        k+=2;
        i++;
}
      while(i<=5);
        printf("\n");
   
}