#include<stdio.h>
int main()
{
    int i,j,n=5,a[]={1,4,6,5,3};
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {

                printf("%d",a[i]);
                a[i=i+3];
            }
            else{
                printf("%d",a[i]);
            }
        }
        
    }
}