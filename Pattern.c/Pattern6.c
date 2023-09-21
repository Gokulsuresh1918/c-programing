#include <stdio.h>
int main()
{ int n=5,i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i*2;j++){
            printf("*");
        }
        printf("\n");
    }
 return 0;
}
