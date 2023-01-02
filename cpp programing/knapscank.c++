#include <iostream>
using namespace std;
int main()
{
    int i, n, max = 0, v, w, j, val[100], wt[100];
    cin >> n;
    cin >> w;
    int m = w;
    for (i = 0; i < n; i++)
        cin >> val[i] >> wt[i];
    if (w == 0)
        return 0;
    for (i = 0; i < n - 1; i++)
    {
        m = w;
        v = 0;
        for (j = i; j < n; j++)
        {
            m = m - wt[j];
            if (m >= 0)
                v = v + val[j];
        }
        max = (max > v) ? max : v;
    }
    cout << max << endl;
    return 0;
}