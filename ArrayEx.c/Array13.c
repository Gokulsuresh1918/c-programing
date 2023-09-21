#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n = 5, c = 1;
    int a[] = {3, 2, 2, 3, 3};

    for (i = 0; i < n - 1; i++)
    {
        c = 1;

        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
            }
        }
        if (c % 2 == 0)
        {
            printf("%d", a[i]);
        }
        else if (c % 2 != 0)
        {
            a[i] = a[i + 1];
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}