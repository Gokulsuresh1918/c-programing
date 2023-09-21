#include<stdio.h>
int main(){
    int p;
    float r,n,si;
    printf("Enter your principle amount");
    scanf("%d",&p);
    printf("Enter your Interest rate");
    scanf("%f",&r);
    printf("Enter your Number of years");
    scanf("%f",&n);
    si=((p*r*n)/100);
    printf("Simple interest:%f",si);
return 0;
}
