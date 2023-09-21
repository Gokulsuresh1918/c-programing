#include <stdio.h>
int main()
{ int i,j;
   
                for(int i=1;i<=10;i++){
                        printf("\n");
                for(int j=1;j<=5;j++){
                if(i==6&&j<=4||i==1&&j<=2||i==10&&j<=1||i==3&&j<=3||j==10&&j<=5){
                printf("*");
                
                }else
                  printf(" ");
                }
        } 
                return 0;
        }
