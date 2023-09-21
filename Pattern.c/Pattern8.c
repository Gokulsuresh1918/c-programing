#include <stdio.h>
int main(){
    int n=5,i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j+i>=6){
                if(i%2==0){
                    printf("$ ");
                }else{
                printf("* ");}
            }else{
                printf(" ");
            }
        }printf("\n");
    }return 0;
}
