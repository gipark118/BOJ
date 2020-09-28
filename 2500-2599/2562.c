#include <stdio.h>

int main(void)
{
	int a;
	int tmp, tmp_cnt;
	int count;

	scanf("%d", &a);
	tmp = a;
	count = 1;
	tmp_cnt = count;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &a);
		count++;
		if (tmp < a)
		{
			tmp = a;
			tmp_cnt = count;
		}
	}
	printf("%d\n%d", tmp, tmp_cnt);
	return (0);
}
