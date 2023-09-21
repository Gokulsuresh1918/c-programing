#include<stdio.h>
int main(){
    int i,j;
  for(i=1;i<=4;i++){
    for(j=1;j<=9;j++){
        if(j<=4+i&&j>=i){
            printf("* ");
        }else{
            printf("  ");
        }
    }printf("\n");
  }
}