#include <stdio.h>

int main()
{
    int i;
    int a[10] = {2,3,7,4,4,6,8,9,7};
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%d ",a[i]);
            a[i = i + 2];
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    
}