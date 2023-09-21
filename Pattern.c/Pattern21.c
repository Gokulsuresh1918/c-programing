#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=11;j++){
            if(j<=6-i||j>=6+i){
                 printf("*");
                }else{
                    if(i%2==0){
                    if(j%2==1){
                    printf("%d",i);
                     } else if(j%2==0){
                    printf("*");
                    }else if (i%2==1){
                    }if(j%2==0){
                    printf("%d",i);
                     } else if (j%2==1){
                      printf("*");
                    }
                }
            }printf("\n");
        } 
        }
    return 0;
}
