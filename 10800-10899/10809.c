#include <stdio.h>

int main(void)
{
    char    word[101] = {};
    int     j;

    scanf("%s", word);
    for (int i = 0; i < 26; i++)
    {
        j = 0;
        while (word[j] && word[j] != (char)(i + 97))
            j++;
        if (word[j] == (char)(i + 97))
            printf("%d ", j);
        else
            printf("%d ", -1);
    }
    return (0);
}
