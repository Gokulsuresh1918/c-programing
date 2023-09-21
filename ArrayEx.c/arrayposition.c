#include <stdio.h>
int main()
{
    int i,values[100],limits,search,kitti=0;
    printf("Enter your limits");
    scanf("%d",&limits);
    printf("enter your values");
    for(i=0;i<limits;i++){
        scanf("%d",&values[i]);
    }
    printf("Pleace enter you value to check");
    scanf("%d",&search);
    for(i=0;i<limits;i++){
        if(search==values[i]){
            kitti=1;
            break;
        }
    }
    if(kitti==1){
        printf("value find at position %d",i+1);
    }else{
        printf("Value not found");
    }
    return 0;
}