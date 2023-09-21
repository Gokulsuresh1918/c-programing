#include <stdio.h>
int main()
{
    int limits,i,values[100],j,temp;
    printf("Enter your limits\n");
    scanf("%d",&limits);
    printf("enter your values\n");
    for(i=0;i<limits;i++){
         scanf("%d",&values[i]);
    }
     for(i=0;i<limits-1;i++){
       for(j=i+1;j<limits;j++){
            if(values[i]>values[j]){
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
            
        }
    }
    printf("sorted values\t");
    for(i=0;i<limits;i++){
        printf("%d \t",values[i]);
    }
return 0;
}