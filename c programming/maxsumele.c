#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main()
{
    int n, b, i, j, arr[1000];
    scanf("%d %d", &n, &b);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (i = 0; i <= b; i++)
    {
        current_sum = 0;
        for (j = 0; j < b; j++)
        {
            int m = (n - b + j + i) % n;
            current_sum += (arr[m]);
        }
        max_sum = (max_sum > current_sum) ? max_sum : current_sum;
    }
    printf("%d", max_sum);
}