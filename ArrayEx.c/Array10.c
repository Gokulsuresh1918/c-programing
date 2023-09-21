#include<stdio.h>
int main()
{
    int i, j, n, count=1;
    int a[] = {1,2,1,2,1};
    n = 5;  

    for (i = 0; i < n-1 ; i++)
    {
        for(j=i;j<n;j++)
    {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count%2==1){
                for(i=0;i<n;i++){
                a[j]=a[j+1];
                n--;
                }
            }
    }
}
for(i=0;i<n;i++){
printf("%d,",a[i]);
}
}