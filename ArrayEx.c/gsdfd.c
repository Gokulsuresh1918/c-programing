#include <stdio.h>
#include <stdlib.h>

void getArray(int);
void displayArray(int);
int main(void) {
    int limit;
    printf("Enter The Size of the Array :");
    scanf("%d",&limit);
    getArray(limit);
    displayArray(limit);
    return EXIT_SUCCESS;
}

void getArray(int limit){
    int i,a[100];
    printf("Enter The Values of Array :\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
}

void displayArray(int limit){
    int i,b[100];
    printf("Your Array is :\n");
    for(i=0;i<limit;i++){
        printf(" %d\t",b[i]);
    }
    printf("\n");
}