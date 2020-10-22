#include <stdio.h>

int         main(void)
{
    char    str[1000000];
    int     i;
    int     count;

    scanf("%[^\n]", str);
    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;
        if (str[i] != ' ' && str[i] != '\0')
            count++;
        while (str[i] != ' ' && str[i] != '\0')
            i++;
    }
    printf("%d\n", count);
    return (0);
}
