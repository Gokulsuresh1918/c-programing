#include <stdio.h>
int main()
{
    int i,j,temp,c;
    int a[]={1,2,3,2,1};
    int n=5;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
    c=0;
    for(j=0;j<n;j++){
        if(a[i]==a[j]&&i!=j)
        {
            c=1;
        }
    }
 if(c==0) 
    {
        printf("%d",a[i]);
    }
}
}