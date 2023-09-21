#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,k,l=2;
    for(i=1;i<=3;i++)
	{
		l=pow(2,i);
	for(j=1;j<=((i*6)-l);j++)
		{
		printf("*");
		}	
		printf("\n");
			
		if(i==3)
		break;
		for(k=1;k<=i;k++)
		{
			printf("*\n");
		}
       
	}
	
}