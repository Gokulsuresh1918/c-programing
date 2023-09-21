#include<stdio.h>
int main(){
    int i,j,k=0;
    for(i=1;i<=9;i++){
         i<=5?k++:k--;
        for(j=1;j<=9;j++){
            if(j<=4+k&&j>=6-k){
                   if(i%2==0) 
                   printf("* "); 
                   else if(i%2==1)
                   printf("- ");
                }else{
                    printf("  ");
                }
            }printf("\n");
        }
    return 0;
}
