#include <stdio.h>

int main(void)
{
    int n;
    int count;
    int rest[10] = {};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        rest[i] += n % 42;
    }
    count = 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (rest[i] == rest[j])
            {
                count--;
                j++;
                break;
            }
        }
    }
    printf("%d", count);
    return (0);
}
