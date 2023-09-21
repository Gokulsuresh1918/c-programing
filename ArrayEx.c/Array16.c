#include<stdio.h>
int main()
{
    int i,j,n=5,sum=0,a[]={1,2,3,4,5};
    for(i=0;i<n;i++)
    {
        if (a[i]%2==1)
        {
            for(j=i;j<n;j++)
            {
            a[j]=a[j+1];
            }
            n--;
        }
         
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
      
    
}