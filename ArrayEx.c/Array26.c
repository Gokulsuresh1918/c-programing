#include<stdio.h>
int main()
{
    int i,j,c,flag=0;
    int a[]={1,2,3,2,1};
    int n=5;

    for(i=0;i<n;i++)
    {
        flag=0;
        c=1;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j]&&a[j]!=-1)
            {
                c++;
                flag=1;
                a[j]=-1;
            }
        }
        if(flag==1)
        {
            printf("element = %d : times = %d\n",a[i],c);
        }
        if(flag==0 && a[i]!=-1)
        {
             printf("element = %d : times = %d",a[i],c);
     
     }
 }
}