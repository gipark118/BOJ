#include <stdio.h>

int main(void)
{
    int n;
    int result;

    scanf("%d", &n);
    //result = (1 + n) * n / 2;
    //printf("%d", result);
    result = 0;
    while (n--)
        result += n + 1;
    printf("%d", result);
    return (0);
}
