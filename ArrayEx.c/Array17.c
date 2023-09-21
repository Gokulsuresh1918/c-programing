#include <stdio.h>
int main()
{
    int i, j;
    int n = 5, count,s=0;
    float sum = 0;
    int a[] = {1, 2, 3, 5, 2};
    
    for (i = 0; i < n; i++)
    {
        count=0;
        for (j =0; j < n; j++)
        {
            if (a[i] ==a[j]&&i!=j)
            {
                count=1;
            }
        }
        if(count==0){
            sum=sum+a[i];
            s++;
        }    
       
    }
     printf("%f",sum/s);
}