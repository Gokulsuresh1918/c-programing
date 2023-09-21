#include <stdio.h>
int main()
{
    int arr[100],limit,sum=0,i;
     printf("Enter you limits");
     scanf("%d",&limit);

     printf("Enter your values");
     for(i=0;i<=limit;i++){
        scanf("%d",&arr[i]);
   }
    for(i=0;i<=limit;i++){
        sum=sum+arr[i];
    }
    printf("sum=%d\n",sum);
    
    
    return 0;
}
