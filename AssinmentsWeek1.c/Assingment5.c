#include<stdio.h>
float main(){
    float mark;
     printf("Enter your mark");
    scanf("%f",&mark);
    if(mark<50){
        printf("Failed");
    }
    else if(mark>90&&mark<=100){
     printf("Grade A");
    }else if(mark>80&&mark<89){
         printf("Grade B");
    }else if(mark>70&&mark<=79){
        printf("Grade C");
    }else if(mark>60&&mark<=69){
        printf("Grade D");
    }else if(mark>50&&mark<=59){
        printf("Grade E");
    }else{
        printf("Invalid");
    }

    return 0;
}
    


