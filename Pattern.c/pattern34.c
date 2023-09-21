#include<stdio.h>
void main(){
    int i,j,c;
    char k;
   k='A';
    for ( i = 1; i <= 7; i++)
   
    {
   
        for ( j= 1; j <=i; j++)
        {
            if (j<=i){
                if(i%2==0)
                printf("%d ",i/2);
                if(i%2==1)
                printf("%c ",k);
                
            }
        }
         if(i%2==1){
            k++;
        }
        printf("\n");
          }  
}