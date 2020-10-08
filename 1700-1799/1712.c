#include <stdio.h>

int main(void)
{
    int a, b, c;
    int i;

    scanf("%d %d %d", &a, &b, &c);          // a: 고정비용, b: 가변비용, c: 판매 가격
    i = 0;
    if (c <= b)
        printf("%d\n", -1);
    else
        printf("%d\n", a / (c - b) + 1);    // a / (c - b) + 1: 손익분기점 (총 수입 > 총 비용(=고정비용 + 가변비용))
}
