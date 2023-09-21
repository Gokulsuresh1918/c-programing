#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=9;i++){ 
        j<=5?k++:k--;
        for(j=1;j<=9;j++){
            if(j<=6-i&&j>=4+k){
            //if(j==6-i||j==4+i){//||j==10-i||j==0+i){
            printf("%d",k);
           } else{
                printf("g ");
            }
           }printf("\n");
        }return 0;
    } 


