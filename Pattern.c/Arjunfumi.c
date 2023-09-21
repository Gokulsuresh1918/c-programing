#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=10;j++)
        {
            if( j<=10-i&&j>=i+1)
            {
                
                printf("* ");
            }else{
                 if(j==10-i+1)
               {
                   k--;
               }
                printf("%d ",k);
               j<=5?k++:k--;
            }
        }printf("\n");
    }return 0;
}