#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
       k=1;
        for(j=1;j<=10;j++){
           j<=4?k++:k--;
            if(j<=10-i||j>=4){
                 printf("%d",k); 
                }else{
                    printf("*");
                }
            }printf("\n");
        }
    return 0;
}
