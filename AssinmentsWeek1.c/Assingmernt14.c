#include<stdio.h>
int main ()
{
int a[100][100];
int b[100][100];
int c[100][100];
int limit,i,j,sum;
printf("enter the size of array");
scanf("%d",&limit);
printf("enter the numbers first array");
for (i=0;i<limit;i++){
    for(j=0;j<limit;j++){
		scanf("%d",&a[i][j]);
	}
}printf("Entered values are:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("enter the numbers second array");
for (i=0;i<limit;i++)
{   for(j=0;j<limit;j++)
	{
       scanf("%d\t",&b[i][j]);
	}
}
	printf("2 nd array are \n");
    for(i=0;i<limit;i++){
    for(j=0;j<limit;j++){
        printf("%d\t",b[i][j]);
}
printf("\n");
    }
    printf("sum is :\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++)
        {
              sum=a[i][j]+b[i][j];
               printf("%d\t",sum);
        }
        printf("\n");
    }
  

    
return 0;
}