#include <stdio.h>
int main() 
 {
    int a,b,temp;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    printf("number entered is swapped");
    printf("  ");
    temp=a;
    a=b;
    b=temp;
    printf("a :%d  b :%d",a,b);
 
    return 0;
 }