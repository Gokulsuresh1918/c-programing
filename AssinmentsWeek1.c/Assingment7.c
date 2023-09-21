#include <stdio.h>
int main(){
    int in,i,ans,limit;
    printf("Enter nu to see multiplication");
    scanf("%d",&in);
    printf("Enter your limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
    ans=i*in;
        printf("%d x %d = %d\n",i,in,ans);
    }
return 0;
}