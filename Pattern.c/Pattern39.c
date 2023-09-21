#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=(i*i)*2;j++)
        {
            printf("*");
            if(j%(i*2)==0)
            {
                printf("\n");
            }

        }
          if(i==3){
            break;
          }
           for (k=1;k<=3;k++)
        {
            printf("* ");
           printf("\n");
           
       }
        
    }
}