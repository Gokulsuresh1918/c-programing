#include <stdio.h>
#include <stdlib.h>
int main(void){
	int i,j,p;
	for(i=1;i<=5;i++)
	{
		for(j=1,p=i;j<=(2*i)-1;j++)
		{
			printf("%d",p);
			j<i?p--:p++;
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1,p=i;j<=(2*i)-1;j++)
		{
			printf("%d",p);
			j<i?p--:p++;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}