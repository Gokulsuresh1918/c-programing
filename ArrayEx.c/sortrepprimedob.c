#include<stdio.h>
int main(){
    int i,j,temp,n,count;
    int a[]={1,2,3,4,5};
    n=5;
    //reverse
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
         printf("%d\t", a[i]);
        
    }
     printf("\n");
    //prime number find
    for(i=0;i<n;i++)
    {
        count==0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                count=1;
            }
        }
            if(count==0)
            {
               a[i]=a[i]*2;
            }
        
        printf("%d\t",a[i]);
    }
}