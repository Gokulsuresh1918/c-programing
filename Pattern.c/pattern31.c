#include<stdio.h>
int main(){
    int i,j,k=0;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=9;j++){
            if(j<=i*2-1){
                printf("%d",k);
                j<i?k++:k--;
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}