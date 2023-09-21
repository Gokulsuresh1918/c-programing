#include<stdio.h>
int main(){
    int i,j;
    char k;
    k='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||j==5||j==1||i==5){
            printf("*  ");
           } else{
                printf("%c  ",k);
                k++;
            }
           }printf("\n");
    }return 0;
}

