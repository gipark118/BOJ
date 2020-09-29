#include <stdio.h>
#include <stdlib.h>

size_t ft_nbrlen(int n)
{
    size_t  count;

    count = 1;
    while (n /= 10)
        count++;
    return (count);
}

char    *ft_itoa(int n)
{
    char            *str;
    unsigned int    len;
    unsigned int    tmp;

    len = ft_nbrlen(n);
    tmp = n;
    if (n < 0)
    {
        tmp = -n;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    str[--len] = tmp % 10 + '0';
    while (tmp /= 10)
        str[--len] = tmp % 10 + '0';
    if (n < 0)
        str[0] = '-';
    return (str);
}

int     main(void)
{
    int     n;
    int     result;
    int     count;
    char    *str;
    char    decimal[11] = "0123456789";

    result = 1;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        result *= n;
    }
    if (!(str = (char *)malloc(sizeof(char) * 11)))
        return (0);
    str = ft_itoa(result);
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (decimal[i] == str[j])
                count++;
        }
        printf("%d\n", count);
    }
    return (0);
}
