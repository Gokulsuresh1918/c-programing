#include<stdio.h>
int main()
    {
int i,j,k;

for (i=1;i<=3;i++)
{
    for(j=1;j<=2+i;j++)
    {
        for(k=1;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    }