#include <stdio.h>
int main()
{
    int n, arr[10], i, c1 = 0, c2 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c1++;
        else if (arr[i] == 2)
            c2++;
    }
    if (c1 > c2)
        printf("INDIA");
    else if (c2 > c1)
        printf("ENGLAND");
    else
        printf("DRAW");
    return 0;
}