#include <stdio.h>
int main(void)
{
	int i, j, count, m;
	int a[100] = {2, 4, 3, 2, 4};
	int limit = 5;
	int visited[5] = {0};
	for (i = 0; i < limit; i++)
	{
		printf("%d\t", a[i]);
	}
	for (i = 0; i < limit - 1; i++)
	{
		count = 1;
		for (j = i + 1; j < limit; j++)
		{
			if (a[i] == a[j] && visited[i] == 0 && visited[j] == 0)
			{
				visited[j] = -1;
				count++;
				m = j;
			}
		}
		if (count == 2)
		{
			a[i] = a[i] * 2;
			a[m] = a[m] * 2;
		}
	}
	printf("\n");
	for (i = 0; i < limit; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}