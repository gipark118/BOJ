#include <stdio.h>

int each_arithmetic_progression(int n)
{
    int count;
    int comp1, comp2;

    count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > 99)
        {
            comp1 = (i / 100) - ((i % 100) / 10);           // 백의 자리 - 십의 자리
            comp2 = ((i % 100) / 10) - (i % 10);            // 십의 자리 - 일의 자리
        }
        else
            count++;
        if (comp1 == comp2)
            count++;
    }
    return (count);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", each_arithmetic_progression(n));
    return (0);
}
