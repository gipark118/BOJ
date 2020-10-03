#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    double max;
    double *arr;
    double sum;

    scanf("%d", &n);
    sum = 0.0;
    max = 0.0;
    if (!(arr = (double *)malloc(sizeof(double) * n)))
        return (0);
    for (int i = 0; i < n; i++)
        scanf("%lf", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum += (arr[j] / max) * 100;
    }
    free(arr);
    printf("%.2lf", sum / n);
    return (0);
}
