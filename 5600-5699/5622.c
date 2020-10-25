#include <stdio.h>
#include <string.h>

int			main(void)
{
	int		number[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	char	dial[16];
	int		time;

	scanf("%s", dial);
	time = 0;
	for (int i = 0; i < strlen(dial); i++)
	{
		time += number[(int)dial[i] - 'A'];
	}
	printf("%d", time);
	return (0);
}
