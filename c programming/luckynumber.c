#include <stdio.h>
int main()
{
    int n, i, k = 0;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &c[i]);
    for (i = 0, k = 0; i < n; i++)
    {
        if (a[i] == 7)
        {
            printf("YES\n");
            break;
        }
        else
            k++;
    }
    if (k == n)
        printf("NO\n");
    for (i = 0, k = 0; i < n; i++)
    {
        if (b[i] == 7)
        {
            printf("YES\n");
            break;
        }
        else
            k++;
    }
    if (k == n)
        printf("NO\n");
    for (i = 0, k = 0; i < n; i++)
    {
        if (c[i] == 7)
        {
            printf("YES\n");
            break;
        }
        else
            k++;
    }
    if (k == n)
        printf("NO\n");
    return 0;
}