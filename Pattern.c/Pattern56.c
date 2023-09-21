#include<stdio.h>
int main()
{
    int i,j,k=1,c,n=7;
     for(i=1;i<=n;i++)
    {
        c=1;
        for(j=1;j<=k;j++)
        {
        
        if(j==1||j==k){
               printf("*");
        }else{
             printf("%d",c);
             j<(k/2)+1?c++:c--;
        }
        }
        if(i>n/2) 
        {
            k-=2;
        }
        else{
            k+=2;
        }
        printf("\n");
    }
}