#include <stdio.h>

 int main()
 {
    int num1,num2,sum,a;
    printf("ENTER 2 NUMBER");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){
        printf("the greatest number you entered is %d\n",num2);
    }else{
        printf("greatest number is %d\n",num1);
    }
    printf("you have entered:%d & %d\n",num1,num2);
    printf("Do you whant to add 2 number press a\n");
    scanf("%d",&a);
    sum=num1+num2;
    printf("sum is:%d\n",sum);
    if(sum<0){
        printf("You have entered a negative number");
    }else{
        printf("you have entered a postive number");
     }
       return 0;
 }