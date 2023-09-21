#include<stdio.h>
int main(){
    int limit,i,arr[100],sum=0,a;
    
    
    printf("Enter your limit");
    scanf("%d",&limit);
    
    printf("Enter value");
    for ( i = 0; i < limit; i++)
    {   scanf("%d",&arr[i]);
    
    if(arr[i]%2==0)
    sum=sum+1;
    }
    printf("total even%d",sum);
}