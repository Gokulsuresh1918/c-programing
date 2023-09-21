#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=8;j++){
            if(j<=5-i||j>=4+i){
                    printf("*");
                }else{
                    printf(" ");
                }
            }printf("\n");
        }
    return 0;
}
