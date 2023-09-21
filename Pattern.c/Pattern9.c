#include <stdio.h>
int main(){
    int n=5,i,j,k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j+i>=6){
                printf("%d ",k++);}
            else{
                printf(" ");
            }
        }printf("\n");
}return 0;

    }
