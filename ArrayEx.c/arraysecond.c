#include<stdio.h>
int main(){
    int i,j,n=5,sum=0,temp,del;
    int a[5]={13,45,60,2,4};
      int  l1=-1000;
      int l2=-2000;
        for(i=0;i<n;i++){
            if(a[i]>l1){
                l2=l1;
                l1=a[i];
            }else if(a[i]>l2&&a[i]<l1){
                l2=a[i];
            }
            }   
             printf("Second largest element are :");
        printf("%d\t",l2);
    }
    

