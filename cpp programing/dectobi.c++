#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int dectobin(int n)
{
    ull b_n = 0;
    int i = 1;
    while (n != 0)
    {
        int rem = n % 2;
        n /= 2;
        b_n += rem * i;
        i *= 10;
    }
    return b_n;
}
int pallin(int n)
{
    int d, rev = 0, m = n;
    while (m != 0)
    {
        d = m % 10;
        rev = rev * 10 + d;
        m = m / 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ull b_n = dectobin(n);
        if (pallin(b_n))
        {
            cout << n << endl;
            continue;
        }
        else
        {
            for ()
            {
            }
        }
    }
    return 0;
}