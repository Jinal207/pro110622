#include<stdio.h>

int main()
{
	int rno[5],m1[5],m2[5],m3[5],m4[5],total[5],i;
	float per[5];

	for(i=0;i<5;i++)
	{
	printf("enter rno:",i);
	scanf("%d",&rno[i]);

	printf("English:",i);
	scanf("%d",&m1[i]);
	printf("Hindi:",i);
                   scanf("%d",&m2[i]);
	printf("Maths:",i);
	scanf("%d",&m3[i]);
	printf("Gujarati:",i);
	scanf("%d",&m4[i]);
                   }

printf("rno \t eng \t hindi \t maths \t guj \t total \t per \t result  grade");
for(i=0;i<5;i++)
	{ 

total[i]=m1[i]+m2[i]+m3[i]+m4[i];
per[i]=total[i]/4;
printf("\n %d \t %d \t %d \t %d \t %d \t %d \t %.2f",rno[i],m1[i],m2[i],m3[i],m4[i],total[i],per[i]);

if(total[i]<200)
{
printf("\t FAIL");
}
else
{
printf( "\t PASS");
}

if(per[i]>=80)
{
printf("\t A");
}
else if(per[i]>=70)
{
printf(" \t B");
}
else if(per[i]>=60)
{
printf("\t C");
}
else
{
printf("\t D");
}

}
}