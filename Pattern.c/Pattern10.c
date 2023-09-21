#include <stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5+i;j++){
            if(j<i){
                printf("  ");
            }else{
                printf("* ");
            }

        }printf("\n");
     } return 0;
}

