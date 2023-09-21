#include<stdio.h>
int main()
{
    int i,j,k=1,m=1;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++){
            if(j==i)
            { 
                printf("%d ",k);
               j<4?k++:k--;
            }
            else if (j==8-i)
            {
                printf("%d ",m);
                
                  j<4?m--:m++;
            }else
            {
                printf("  ");
            }
        }printf("\n");
    }
}
