#include<stdio.h>
int main()
{
    int i,j,n=5,c=0,a[]={1,2,3,4,5};
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                c=1;
            }
        }
     if(c==0)
        {
            a[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}