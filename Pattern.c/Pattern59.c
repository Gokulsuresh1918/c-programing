#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,j,p=4;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=p;j++)
		{
			printf("*");
		}
		printf("\n");
		p=p+(6-(i*2));
		for(j=1;j<=2;j++)
		{
			if(i==3)
			{
				break;
			}
			printf("*\n");
		}
	}
	return EXIT_SUCCESS;
}