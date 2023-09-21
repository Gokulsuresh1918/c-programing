

#include <stdio.h>

int main()
{
    int i,j,count,n=5;
    int a[]={1,2,3,1,4};
    for(i=0;i<n;i++){
        count=0;
        for(j=i;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        if(count==2){
            a[i]=a[i]*2;
            a[j]=a[j]*2;
            break;
        }}
    }
    for(i=0;i<n;i++){
        
        printf("%d ",a[i]);}
    
}