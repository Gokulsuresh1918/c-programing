
    #include <stdio.h>
    int main(){
    int i,j;
    int temp[10][10];
    void getArray(int n,int arr[10][10],int arr1[10][10])
    {
    printf("enter arr1 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
    scanf("%d",&arr[i][j]);}
    }
    printf("enter arr2 \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    scanf("%d",&arr1[i][j]);
        }
    }}
    void addArray(int n,int arr[10][10],int arr1[10][10]){
        
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            temp[i][j]=arr[i][j]+arr1[i][j];} 
    }
    void displayArray(int temp[10][10],int n){
        printf("result \n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
    printf("%d ",temp[i][j]);}
        printf("\n");}}
    int main()
    {
        int arr[10][10];
        int arr1[10][10];
        int n=2;
        printf("Enter size of the array ");
        scanf("%d",&n);
        getArray(n,arr,arr1);
        addArray(n,arr,arr1);
        displayArray(temp,n);
    }
    }  
    return 0;
    }

