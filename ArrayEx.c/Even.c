#include<stdio.h>
int main(){
    int i,j,temp,limit,a[50],E[5],o[5],Ev,od;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < limit; i++)
    {
        if(a[i]%2==0){
            E[i]=a[i];
            Ev++;
        }else{
            o[i]=a[i];
            od++;
        }
    }for(i=0;i<Ev;i++){
        printf("%d",E[i]);
    }
    return 0;
}