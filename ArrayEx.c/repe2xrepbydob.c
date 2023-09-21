#include <stdio.h>
int main()
{
    int i, j, temp, n, count;
    int a[] = {1,2,3,2,1};
    n = 5;
    int b[5] = {};
    for (i = 0; i < n - 1; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j] && b[i] == 0 && b[j] == 0)
            {
                count++;
                b[j]=-1;
            }
        }
        if (count > 1)
        {
            printf("repeted elements =%d : frequency= %d\n", a[i], count);
        }
    }
}
