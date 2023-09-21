/*
 ============================================================================
 Name        : array18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size,a[100],sl=0,l=0;
	setbuf(stdout,NULL);
	printf("size");
	scanf("%d",&size);

	printf("enter elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}


	for(i=0;i<size;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl&&a[i]!=l)
		{
			sl=a[i];
		}
	}
	for(i=0;i<size;i++)
	{
		if(sl==a[i])
		{
			for(j=i;j<size;j++)
			{
				a[j]=a[j+1];
			}
			size--;

		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n%d\t%d",l,sl);

	return EXIT_SUCCESS;
}