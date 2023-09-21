#include <stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++){
        k=1;
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=1;j<=5;j++){
            if(j<=6-i){
                printf("%d ",i*j);
            }else{
                printf(" ");
            }
        
    }
    printf("\n");
   
}
    return 0;
}