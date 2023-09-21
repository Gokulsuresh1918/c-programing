#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,p;
	for(i=1,p=i;i<=9;i++)
	{
		for(j=1;j<=p;j++)
		{
			if(j%2!=0)
			{
				printf("#");
			}
			else
			{
				printf("-#");
			}
		}
		i<5?p++:p--;
		printf("\n");
	}
	return EXIT_SUCCESS;
}