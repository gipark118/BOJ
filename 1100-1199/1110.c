#include <stdio.h>

int main(void)
{
    int n;
    int count;
    int a, b, tmp;

    scanf("%d", &n);
    tmp = n;
    count = 0;
    while (1)
    {
        a = (tmp % 10);
        b = (tmp / 10) + (tmp % 10);
        tmp = (10 * a) + (b % 10);
        count++;
        if (n == tmp)
            break;
    }
    printf("%d", count);
    return (0);
}
