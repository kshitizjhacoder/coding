#include <iostream>
using namespace std;
#define int long long
int mergeTwo(int arr[], int n, int c[])
{
    int asc[10000] = {0};
    int dsc[10000] = {0};
    int res[10000];
    int k = 0, cont = 0, i, min, j;
    for (i = 0; i < n; i++)
    {
        if (c[i] == 1)
        {
            asc[k] = arr[i];
            k++;
        }
        else
        {
            dsc[cont] = arr[i];
            cont++;
        }
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (asc[j] > asc[j + 1])
            {
                min = asc[j];
                asc[j] = asc[j + 1];
                asc[j + 1] = min;
            }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (dsc[j] < dsc[j + 1])
            {
                min = dsc[j + 1];
                dsc[j + 1] = dsc[j];
                dsc[j] = min;
            }
    for (i = 0; i < k; i++)
        res[i] = asc[i];
    for (j = 0; j < cont; j++, i++)
        res[i] = dsc[j];
    return res[0];
}
signed main()
{
    int t;
    cin >> t;
    int n, a[100000], i, j, c[100000] = {0};
    int *k;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
        {
            c[i] = 0;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                    c[i]++;
            }
            if (c[i] > 1)
                printf("-1\n");
            else
                continue;
        }
        k[0] = mergeTwo(a, n, c);
        cout << k[0];
        for (i = 0; i < n; i++)
        {
            cout << k[i] << " ";
        }
    }
    return 0;
}