#include <stdio.h>
int main()
{
    int i, j, n = 5, a[] = {1, 2, 3, 2, 1};
    int c = 1;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // if(a[i]==0)
            // {
            //     continue;
            // }
            if (a[i] == a[j])
            {
                c++;
                // a[j]=0;
            }
            if (c > 1)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        for (i = 0; i < n; i++)
            printf("element =%d times = %d\n", a[i], c);
    }
}
