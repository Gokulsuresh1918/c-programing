#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i,j,n=5,flag;
    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%2==0){
                flag=1;
            }
        }if(flag==0&&a[i]!=1){
            printf("%d",a[i]);
        }
    }

}