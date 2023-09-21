#include <stdio.h>
  int main()
  {
    int a[3][3],j,search,flag=0,i;
    printf("Enter your values");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d",&a[i][j]);
        }
    }
    printf("Entered values are :\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
        }
    printf("\n");
  }
  for(i=0;i<3;i++){
        printf("enter value to search position");
         scanf("%d",&search);
         for(i=0;i<3;i++);{
        if(search=a[i][j]);
         flag=1;
         break ;
         
  }
  }if(flag=1){
    printf("position was: %d",a[i][j]);
  }else{
    printf("entered a wrong number");
  }
  return 0;
  }