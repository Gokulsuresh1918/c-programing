#include<stdio.h>
int main(){
    int i,j,k=0;
    for(i=1;i<=7;i++){
        i<=4?k++:k--;
        for(j=1;j<=7;j++){
            if(j<=k||j>=8-k){
                 printf("* "); 
            }else{
                 printf("  ");
            }
            }printf("\n");
        }
    return 0;
}
