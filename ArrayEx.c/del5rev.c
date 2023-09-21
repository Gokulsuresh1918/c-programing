#include <stdio.h>
int main()
{
    int i, j, n, temp;
    int a[] = {1, 2, 3, 4, 5};
    n = 5;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            a[i] = a[i + 1];
            n--;
        }
       
    }
    for(i=0;i<n;i++)
    {
         printf("%d\t", a[i]);
    }
    printf("\n");
    // reverse
    for (i = 0, j = n - 1; i <= n / 2; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}