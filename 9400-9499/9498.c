#include <stdio.h>

int main(void)
{
    int grade;

    scanf("%d", &grade);
    if (90 <= grade && grade <= 100)
        printf("A");
    else if (80 <= grade && grade < 90)
        printf("B");
    else if (70 <= grade && grade < 80)
        printf("C");
    else if (60 <= grade && grade < 70)
        printf("D");
    else
        printf("F");
    return (0);
}
