#include <iostream>
using namespace std;

int main()
{
    int i, j, n, k, t, sum = 0;
    int a[1000];
    cin >> n >> t;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        k = i + 1;
        sum = 0;
        for (j = i; j < k && j < n; j++, k++)
        {
            sum = sum + a[j];
            if (sum == t)
                break;
        }
        if (sum == t)
        {
            cout << i << " " << j;
            break;
        }
        if (i == n - 1)
            cout << "-1 -1";
    }
    return 0;
}