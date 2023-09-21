#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,p=1;
		for(i=1;i<=4;i++)
		{
			for(j=1;j<=4-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*i)-1;j++)
			{
				if(j%2!=0)
				{
					printf("%d",p);
					p++;
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}