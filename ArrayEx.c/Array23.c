#include <stdio.h>
int main()
{
    int i, j, n = 5, a[] = {1, 6, 3, 4, 5};
    int c = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c = 1;
            }
            if (c == 0)
            {
                a[i] = a[i + 1];
            }
            n--;
        }
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
    }
}
