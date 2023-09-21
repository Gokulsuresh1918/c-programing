#include <stdio.h>

int main()
{
    int i,j,temp,a[100],limit;
    printf("enter array limit");
    scanf("%d",&limit);
    printf("enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }printf("new array\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
       }
        printf("\n\n");
        for(i=0;i<limit;i++){
        if(a[i]%2==0){
            
           for(j=i+1;j<limit-3;j++){
              
              a[j]=a[j+3];
          }
          if(i==limit-1){
                limit=limit;
            }else if(i==limit-2){
                limit=limit-1;
            }else if(i==limit-3){
                limit=limit-2;
            }else{
                limit-=3;//limit=limit-2
            }
           
        }
    } 
    for(i=0;i<limit;i++){
        printf("%d\t ",a[i]);
    }
}
