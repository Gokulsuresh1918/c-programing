#include<stdio.h>
int main(){
    int num1,i,flag=1;
    printf("Enter your number");
    scanf("%d",&num1);
    for(i=2;i<num1;i++){
       if(num1%i==0){
        flag=0;
        break;
        }
        }if(flag==1){
            printf("Prime number");
        }else{
            printf("Not a prime number");
        }
    return 0;
}