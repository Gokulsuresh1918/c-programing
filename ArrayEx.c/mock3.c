#include<stdio.h>
int main(){
    int i,j,n=5,sum=0,temp,del;
    int a[5]={13,45,60,2,4};
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }printf("Reversed elements are :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }for(i=0;i<n;i++){
        sum=sum+a[i];
    } printf("\nsum : %d\n",sum);
    if(sum>100){
      int  l1=-1000;
      int l2=-2000;
        for(i=0;i<n;i++){
            if(a[i]>l1){
                l2=l1;
                l1=a[i];
            }else if(a[i]>l2&&a[i]<l1){
                l2=a[i];
            }
            }   
             printf("Second largest element are :");
                printf("%d\n",l2); 
                //del=l2;
                for(i=0;i<n;i++){
                    if (a[i]==l2)
                    {for ( j=i; j <n; j++){
                            a[i]=a[i+1];
                        }n--;   
                    }      
                } 
        }else{
        printf("sum not greater than 100");
    
    }printf("Element without second largest \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    }
