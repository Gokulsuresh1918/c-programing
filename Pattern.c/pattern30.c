#include<stdio.h>
int main(){
    int i,j;
    char k;
    k='A';
    for(i=1;i<=4;i++){
        
        for(j=1;j<=i*2-1;j++){
            if(j%2==1){
                printf("*");
                }else{
                    printf("%c",k);
                    k++;
                }
            }printf("\n");
        }
    }
