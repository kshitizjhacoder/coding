#include <bits/stdc++.h>
using namespace std;

int equa(int p1, int *p2, int x)
{
    int res, a, b;
    a = p1 + x;
    b = *p2 + x;
    // cout << a << " " << b << endl;
    res = a ^ b;
    return res;
}
int main()
{
    int t, j = 0, i, n, x = 0, res_1, res;
    int a[1000];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        while (x < 10)
        {
            res_1 = a[0];
            for (i = 1, j = 0; i < n - 1; i++)
            {
                // cout << j++ << endl;
                res_1 = equa(res_1, &(a[i]), x);
                // cout << res_1 << " ";
            }
            if (res_1 == 0)
            {
                cout << x << endl;
                break;
            }
            else
                x++;
        }
        cout << "-1" << endl;
    }
}