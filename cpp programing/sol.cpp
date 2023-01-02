#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff float
#define dd double
#define ui unsigned int
#define lli long long int
#define S string
#define testip cin >> test;
#define testcase while (test--)
#define floop(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define um unordered_map<int, int>
#define mp make_pair
#define precision(a) cout << setprecision(a) << fixed
const ll mod = 1000000007;

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

ll a[1000009], vis[1000009];
ll func(ll x)
{
    ll u = a[x], cnt = 1;
    vis[u] = vis[x] = 1;
    while (u != x)
    {
        u = a[u];
        cnt++;
        vis[u] = 1;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll test = 1;
    testip

        testcase
    {
        ll n, ans = 1e18, g;
        cin >> n;
        ll b[n];
        g = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            vis[i] = 0;
        }
        for (int i = 1; i <= n; i++)
            if (vis[i] == 0)
                b[++g] = func(i);
        ans = 1;
        for (int i = 1; i <= g; i++)
        {
            if (b[i] != 1)
                for (int j = i + 1; j <= g; j++)
                    b[j] /= gcd(b[i], b[j]);
            ans = (b[i] * ans) % mod;
        }
        cout << ans << endl;
    }

    return 0;
}