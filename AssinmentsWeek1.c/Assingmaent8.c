#include <stdio.h>
int main(){
int i,limit,A,sum=0;
printf("Enter your limit");
scanf("%d",&limit);
for(i=1;i<=limit;i++){
    if(i%2==1){
    sum=sum+i;
}
}printf("%d",sum);
    return 0;
}