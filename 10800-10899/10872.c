#include <stdio.h>

int main(void)
{
    int n;
    int factorial;

    scanf("%d", &n);
    factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;
    printf("%d\n", factorial);
    return (0);
}
