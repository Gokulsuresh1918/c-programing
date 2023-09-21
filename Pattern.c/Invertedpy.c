#include<stdio.h>
int main()
{
    int i,j,A=1;
   
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
          if(j>=i&&j<=i)
               printf("%d",A);
           else
               printf (" ");
        }printf("\n");
    }
}