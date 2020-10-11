#include <stdio.h>

// int main(void)
// {
//     int n;
//     int factorial;
//
//     scanf("%d", &n);
//     factorial = 1;
//     for (int i = 1; i <= n; i++)
//         factorial *= i;
//     printf("%d\n", factorial);
//     return (0);
// }

int factorial(int n)
{
    if (n == 0)
        return (1);
    else if (n >= 1)
        return (n * factorial(n - 1));
    else
        return (0);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return (0);
}
