#include<stdio.h>
void main(){
    int i,j,n=5,count=0;
    int a[10]={5,4,8,6,7};
    for(i=0;i<n;i++){
        printf("%d", a[i]);

        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
            i+=2;
            break;
        }
    }
}
}