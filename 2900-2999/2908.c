#include <stdio.h>

int main(void)
{
    int a, b;
    int big;

    scanf("%d %d", &a, &b);
    if ((a % 10) > (b % 10))
        big = a;
    else if ((a % 100) > (b % 100) && (a % 10) == (b % 10))
        big = a;
    else if ((a > b) && (a % 100) == (b % 100))
        big = a;
    else
        big = b;
    for (int i = 0; i < 3; i++)             // 세 자리수
    {
        printf("%d", big % 10);
        big /= 10;
    }
    return (0);
}
