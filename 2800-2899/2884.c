#include <stdio.h>

int main(void)
{
    int h, m;

    scanf("%d %d", &h, &m);
    if (m >= 45 && m <= 59)
        printf("%d %d", h, m - 45);
    else if (h == 0)
        printf("%d %d", 23, 60 - (45 - m));
    else
        printf("%d %d", h - 1, 60 - (45 - m));
    return (0);
}
