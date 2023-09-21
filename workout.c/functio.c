#include <stdio.h>

 int main(){
   int sum(); 
    int a;
    a=sum();
    printf("result is %d\n",a);
    return 0;
}
int sum(){
    int num1,num2,result;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    return result;
}
