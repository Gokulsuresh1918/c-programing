#include <stdio.h>
int main()
{
    int i, j, n=5,temp;
    int a[5] = {2,7,3,5,78};
    for (i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            for (j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
           n--;
        }
    }
   printf("New array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
    }printf("\nREversed :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}