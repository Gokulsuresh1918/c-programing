#include<stdio.h>
int main()
{
    int i,j,temp,n=5,a[]={1,2,3,4,5};
    for(i=0,j=n-1;i<=n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            a[i]=a[i+1];
        }
        else{
            printf("%d\t",a[i]);
        }
    }
}
    
