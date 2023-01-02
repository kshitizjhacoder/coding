#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ma, c = 0, j = 0, i, l = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sa = *min_element(a, a + n);
        ma = *max_element(a, a + n);
        cout << ma - sa << endl;
    }
}