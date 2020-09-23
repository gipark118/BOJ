#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int a, b;

    scanf("%d", &n);
    i = 0;
    while (i < n)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        i++;
    }
    return (0);
}
