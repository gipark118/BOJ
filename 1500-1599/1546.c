#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int max;
    double sum;

    scanf("%d", &n);
    max = 0;
    sum = 0.0;
    if (!(arr = (int *)malloc(sizeof(int) * n)))
        return (0);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum += ((double)arr[j] / max) * 100;
    }
    free(arr);
    printf("%.2lf", sum / n);
    return (0);
}
