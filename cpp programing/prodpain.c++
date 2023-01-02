#include <bits/stdc++.h>
using namespace std;

int maxsub(vector<int> b, int l)
{
    int i, j, k, ma = 0, n = l;
    i = 0;
    k = l - 1;
    j = (i + k) / 2;

    if (l == 3)
    {
        ma = (b[j] - b[i]) * (b[k] - b[j]);
        return ma;
    }
    while (n - 2)
    {
        for (i = 0; i < j; i++)
        {
            j = (i + k) / 2;
            ma = max(ma, (b[j] - b[i]) * (b[k] - b[j]));
        }
    }
    return ma;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, k, m, l = 0, sum = 0;
        cin >> n;
        vector<int> b;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                m = j + 3;
                for (k = i; k < m && m <= n; j++)
                {
                    b.insert(b.begin(), a[k]);
                    l++;
                }
                sum = sum + maxsub(b, l);
            }
        }
        cout << sum << endl;
    }
}