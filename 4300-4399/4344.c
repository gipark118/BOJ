#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int n;
    int *arr;
    int grade;
    int count;
    double sum;
    double avg;

    scanf("%d", &c);
    for (int i = 0; i < c; i++)                     // c번째 테스크케이스 입력.
    {
        scanf("%d", &n);
        avg = 0.0;
        sum = 0.0;
        if (!(arr = (int *)malloc(sizeof(int) * n)))
            return (0);
        for (int j = 0; j < n; j++)                 // 점수 입력.
        {
            scanf("%d", &grade);
            arr[j] = grade;
            sum += grade;                           // 점수 합.
        }
        avg = sum / n;                              // 점수 평균.
        count = 0;
        for (int j = 0; j < n; j++)                 // 평균보다 점수 높은 사람 확인.
        {
            if (avg < arr[j])
                count++;
        }
        free(arr);
        printf("%0.3lf%%\n", ((double)count / n) * 100);
    }
    return (0);
}
