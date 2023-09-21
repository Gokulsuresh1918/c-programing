#include <stdio.h>
int main()
{
    int l,i,j,k;
    for(i=0;i<=5;i++){
        for (j=0;j<=6-i;j++){
            printf(" ");
        }
         for(k=i;k>=0;k--){
                printf("%d",k);
            
            if(k==0)
            {
                for(l=1;l<=i;l++)
                {
                    printf("%d",l);
                }
            }
         }
    printf("\n");
    }
    
return 0;
}