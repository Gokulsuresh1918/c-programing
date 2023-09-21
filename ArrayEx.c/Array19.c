
#include<stdio.h>
int main()
{
    int count;
    int i,j,n=6,a[]={4,2,15,4,5,6};
    for(i=0;i<n;i++)
    {
        count=0;
            for(j=2;j<a[i];j++)
            {            
                if(a[i]%j==0)
               count=1;
               
            }
             
            if(a[i]%2==0)
            a[i]=1;

            if(count==0){
                a[i]=0;
            }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}