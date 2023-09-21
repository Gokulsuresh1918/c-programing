#include<stdio.h>
#include<stdlib.h>

void getArray(int);
void displayArray(int);
int main(void){
    int limit;
    printf("enter a limit");
    scanf("%d",&limit);
    getArray(limit);
    displayArray(limit);
    return 0;
}
void getArray(int limit){
    int i,a[100];
    printf("Enter your values");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
}
void displayArray(int limit){
    int i,b[100];
    printf("Array was :\n");
    for(i=0;i<limit;i++){
        printf(" %d\t",b[i]);
}
printf("\n");
}
