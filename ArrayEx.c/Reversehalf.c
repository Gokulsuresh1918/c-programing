#include<stdio.h>
int main(){
    int i,j,temp,limit,a[50];
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=limit;i<=limit/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }printf("Reverse values are :");   
     for(i=0;i<limit;i++){
        printf(" %d",a[i]);
    }
}