#include <stdio.h>

int not_self_number(int n)
{
    int result;

    result = n;
    while (n > 0)
    {
        result += n % 10;
        n /= 10;
    }
    return (result);
}

int main(void)
{
    int arr[10001] = {};
    int idx;

    for (int i = 1; i < 10001; i++)
    {
        idx = not_self_number(i);
        if (idx < 10001)
            arr[idx] = 1;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (arr[i] == 0)
            printf("%d\n", i);
    }
    return (0);
}
