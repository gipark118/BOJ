#include <stdio.h>

int main(void)
{
    int n;
    int a;
	int min, max;

    scanf("%d", &n);
    scanf("%d", &a);
    min = a;
    max = a;
    for (int i = 0; i < (n - 1); i++)
    {
        scanf("%d", &a);
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    printf("%d %d", min, max);
    return (0);
}
