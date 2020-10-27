#include <stdio.h>

void sugar_bag_count(int n)
{
    int count;

    count = 0;
    while (1)
    {
        if (!(n % 5))
        {
            count += n / 5;
            printf("%d", count);
            return ;
        }
        n -= 3;
        count++;
        if (n < 0)
        {
            printf("%d", -1);
            return ;
        }
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);
    sugar_bag_count(n);
    return (0);
}
