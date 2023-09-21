#include<stdio.h>
int main()
{
    int i,j,c=1,n=5;
    int a[]={1,2,3,2,1};
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("element = %d :  times = %d\n",a[i],c);
    }
}