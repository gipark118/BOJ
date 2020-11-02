#include <stdio.h>

int		ft_sqrt(int nb)
{
	int x;
	int i;

	x = 2;
	i = 0;
	if (nb <= 0)
		return (0);
	while (i < 20)
	{
		x = (x + (nb / x)) / 2;
		i++;
	}
	if ((x * x) != nb)
		return (x);
	return (x);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int main(void)
{
    int n;
    int num;
    int count;

    scanf("%d", &n);
    count = 0;
    while (n--)
    {
        scanf("%d", &num);
        if (ft_is_prime(num))
            count++;
    }
    printf("%d", count);
}
