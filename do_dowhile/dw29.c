#include<stdio.h>
    int main()
{
    int i=1,k=11;
        do
        {
              int j=1;
            do
              {
               printf("\t%d",k++);
	j++;
              } while(j<=5);
        k+=5;
        i++;
        printf("\n");
        }while(i<=5);
}