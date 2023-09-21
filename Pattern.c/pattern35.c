#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 7-i ; j++)
        {
            if ((i + j) % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
}