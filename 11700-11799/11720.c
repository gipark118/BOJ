#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char *arr;
    int sum;

    scanf("%d", &n);
    sum = 0;
    if (!(arr = (char *)malloc(sizeof(char) * n + 1)))
        return (0);
    scanf("%s", arr);
    arr[n + 1] = '\0';
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }
    free(arr);
    printf("%d", sum);
    return (0);
}
