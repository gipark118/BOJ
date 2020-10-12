#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;                      // 테스트 케이스의 개수(1 <= t <= 1000)
    int r;                      // 반복 횟수(1 <= r <= 8)
    char s[21];                    // 문자열(20글자 이하)


    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &r, s);
        for (int j = 0; j < strlen(s); j++)
        {
            for (int k = 0; k < r; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
    return (0);
}
