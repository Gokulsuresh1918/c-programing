#include<stdio.h>
int main()
{
    int i,j,m=11,n;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1,n=m; j <= 6-i; j++)
        {
            printf("%d ",n);
            n++;
        }
        m=m-(5-i);
        printf("\n");
    }
    
}