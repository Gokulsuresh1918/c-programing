#include<stdio.h>
int main(){
    int limit,ar1[100],i,ar2[100],temp;
    printf("Enter your limits");
    scanf("%d",&limit);
    
    printf("Enter array 1 values");
    for(i=0;i<limit;i++){
    scanf("%d",&ar1[i]);
    }
    
    printf("Enter array 2 values");
    for(i=0;i<limit;i++){
    scanf("%d",&ar2[i]);
    }
    for(i=0;i<limit;i++){
    temp=ar1[i];
    ar1[i]=ar2[i];
    ar2[i]=temp;
    }
    printf("Array 1 :");
    for(i=0;i<limit;i++){
    printf(" %d\n",ar1[i]);
    }
    printf("Array 2 :");
     for(i=0;i<limit;i++){
    printf(" %d\n",ar2[i]);
    }
    return 0;
}



