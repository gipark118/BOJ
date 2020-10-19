#include <stdio.h>
#include <string.h>

int main(void)
{
    char    s[1000000];
    int     alphabet[26] = {};
    int     max;
    int     result;
    int     count;

    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            alphabet[s[i] - 'A']++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            alphabet[s[i] - 'a']++;
    }
    max = alphabet[0];
    result = 0;
    for (int i = 1; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            result = i;
        }
    }
    count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max == alphabet[i])
            count++;
    }
    if (count == 1)
        printf("%c\n", result + 'A');
    else
        printf("?\n");
    return (0);
}
