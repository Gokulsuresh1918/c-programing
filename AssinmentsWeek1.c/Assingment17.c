#include <stdio.h>
int main()
{
    int num1,num2,num3,choose,result;
    printf("Enter  2 numbers");
    scanf("%d%d",&num1,&num2);
    printf("you have entered  %d  & %d\n",num1,num2);
    printf("1 for addition\n2 for subbstration\n3 for multiplication\n4 for divition\nenter you choose\n");
    scanf("%d",&choose);
    if(choose==1){
        result=num1+num2;
        printf("Result is :%d\t",result);
    }else if(choose==2){
        result=num1-num2;
        printf("Result is :%d\t",result);
    }else if(choose==3){
        printf("Result is :%d\t",result);
        result=num1*num2;
    }else if(choose==4){
        printf("Result is :%d\t",result);
        result=num1/num2;
    }else{
        printf("you are a fool");
    }
    
    
    return 0;
}