#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c, k, i;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), greater<>());
        for (i = 0; i < n; i++)
        {
            if (arr[i] >= arr[k - 1])
                c++;
            else
                break;
        }
        cout << c << endl;
    }
}