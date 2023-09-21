#include<stdio.h>
float main(){
    float mark;
    printf("Enter your mark");
    scanf("%f",&mark);
    
    if(mark>=0&&mark<=100){
        if(mark>=50){
            printf("you have passed\n");
        }else{
            printf("you have Failed\n");
        }
        }else{
            printf("invalid number\n");
        }
    
        return 0;
}
    
    

