#include <stdio.h>

int main(void)
{
	int n;
	int max;
	int count;

	max = -1;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n);
		if (max < n)
		{
			max = n;
			count = i;
		}
	}
	printf("%d\n%d", max, count + 1);
	return (0);
}
