int main()
{
    int i,limit;
    int arr[100];
    int mu[100];
    int n=0;
    printf("Enter the array limit");
    scanf("%d",&limit);
    
    printf("Enter the value of array");
    for(i=0;i<limit;i++)
    scanf("%d",&arr[i]);
    
    for(i=0;i<limit;i++){
       n=arr[i]*arr[i+1];
        mu[i]=n;
        }
        printf("Result is ");
    for(i=0;i<limit-1;i++){
        printf("%d ",mu[i]);
        }
}