#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=11;j++)
        {
            if(j>=(i+i)&&j<=(12-(i+i)))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}