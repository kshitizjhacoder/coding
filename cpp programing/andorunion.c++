#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> bitcount(30);
        while (num--)
        {
            int n;
            cin >> n;
            for (int i = 0; i < 30; i++)
            {
                if (n & (1 << i))
                    bitcount[i]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 30; i++)
        {
            if (bitcount[i] > 1)
                ans |= (1 << i);
        }
        cout << ans << endl;
    }
}