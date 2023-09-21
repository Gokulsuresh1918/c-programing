#include<stdio.h>
int main()
{
    int i,j,k=1,m=17,n;
    for(i=1;i<=4;i++)
    {
        for (j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        
        for(j=1;j<=5-i;j++)
        {
            printf("%d ",k);
            k++;
        }
        for(j=1,n=m;j<=5-i;j++)
        {
            printf("%d ",n);
            n++;
        }
        m=m-(4-i);
        printf("\n");
    }
    
}