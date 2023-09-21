#include <stdio.h>

int main(){
int i,j,k=0,row;
printf("Enter number");
scanf("%d",&row);
 
 for(i=1;i<=row;i++){ 
     i<=(row+1)/2?k++:k--;
      for(j=1;j<=(row+1)/2;j++){
           if(j<=k)
            printf("*");
        else
            printf(" ");
      
        }printf("\n");
    }
}
