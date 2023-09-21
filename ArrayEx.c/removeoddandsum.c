#include<stdio.h>
int main()
{
    int i,j,n,sum=0,a[100];

printf("Enter array limit");
scanf("%d",&n);
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//odd nu
  printf("\teven nu ");
for(i=0;i<n;i++)
{
    if(a[i]%2==1){
        for(j=i;j<n;j++)
    {
        a[j]=a[j+1];
    }
     n--;
    }
}for(i=0;i<n;i++){

    printf("%d\t",a[i]);
}
//sum of even
printf("Sum :\n");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}

