#include <stdio.h>
void steps(int a, int b);
int main()
{
    int i, a[1000], b[1000], t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < t; i++)
    {
        steps(a[i], b[i]);
    }
    return 0;
}
void steps(int a, int b)
{
    int diff = b - a;
    if (diff % 2 == 0)
    {
        diff = diff / 2;
        printf("%d\n", diff);
    }
    else
    {
        diff = diff / 2;
        diff = diff + 2;
        printf("%d\n", diff);
    }
}
