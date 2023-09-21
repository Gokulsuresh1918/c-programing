#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i*3;j++){
            printf("* ");
        }printf("\n ");
            if(i==4){
                break;
            }for(k=1;k<=i*2;k++){
                printf("* ");
                printf("\n ");
            }
        }
    }
