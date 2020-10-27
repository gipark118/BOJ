#include <stdio.h>
#include <string.h>

int	croatia_alphabet_check(char *str, int idx)
{
	char *croatia_alphabet[9] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int i;
	int j;
	int tmp;
	int count;

	i = 0;
	count = 0;
	tmp = idx;
	while (croatia_alphabet[i])
	{
		j = 0;
		idx = tmp;
		while (str[idx] == croatia_alphabet[i][j] && croatia_alphabet[i][j] != '\0')
		{
			idx++;
			j++;
		}
		if (j == 2 && !(i == 2))
		{
			count++;
			break ;
		}
		else if (j == 3)
		{
			count += 2;
			break ;
		}
		i++;
	}
	return (count);
}

int main(void)
{
	char str[101];
	int	count;
	int check;
	int i;

	scanf("%s", str);
	count = 0;
	i = 0;
	while (i < strlen(str))
	{
		check = croatia_alphabet_check(str, i);
		if (check == 1)
		{
			i += 2;
			count++;
			continue ;
		}
		else if (check == 2)
		{
			i += 3;
			count++;
			continue ;
		}
		else
			count++;
		i++;
	}
	printf("%d", count);
	return (0);
}
