#include<stdio.h>
float main(){
    float wt,lb,ass,grade;
    printf("Enter the marks scored by the students\n");
   
    printf("Writtern exam");
    scanf("%f",&wt);
   
    printf("lab exam : ");
    scanf("%f",&lb);
    
    printf("Assingment :");
    scanf("%f",&ass);

    printf("Graded entered by student =");
    grade=(wt*70)/100 + (lb*20)/100 + (ass*10)/100;
    printf("%f",grade);

    return 0;
}