#include<stdio.h>
void main(){
    int i,j,k;
    for ( i = 1; i <= 6; i++)
    {k=i;
        for ( j= 1; j <=11; j++)
    
        {
            if (j<=5+i&&j>=7-i){
                if(j<=6){
                    k--;
                }else if(j>=7){
                    k++;
            } 
            printf("%d",k);
              }else 
               printf(" ");
             
           } printf("\n");
        }
        return 0;
          }  

