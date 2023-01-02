#include <stdio.h>
int main()
{
    int i, j, c = 0, z, k = 0, n, t;
    scanf("%d", &n);
    t = n + (n - 1);
    for (i = 1; i <= t; i++)
    {
        c = 0;
        for (z = 1; z <= k; z++)
        {
            printf("%d", n - c);
            c++;
        }
        for (j = 1 + k; j <= t - k; j++)
        {
            printf("%d", n - k);
        }

        k++;
        printf("\n");
    }
    return 0;
}