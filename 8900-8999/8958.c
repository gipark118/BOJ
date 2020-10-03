#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char ox[80];
    int score;
    int result;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)                 // n번의 테스트케이스 입력.
    {
        scanf("%s", &ox);                       // n번 TestCase 입력.
        result = 0;
        for (int j = 0; j < strlen(ox); j++)
        {
            score = 1;
            while (ox[j] == 'O')                // O일시 연속으로 오는지 확인.
            {
                result += score;
                score++;
                j++;
            }
        }
        printf("%d\n", result);
    }
    return (0);
}
