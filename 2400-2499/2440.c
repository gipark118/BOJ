#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int j;

    scanf("%d", &n);
    i = 0;
    while (i < n)
    {
        j = 0;
        while (i + j < n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}
