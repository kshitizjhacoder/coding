#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, k, n, d;
        cin >> n >> k;
        if (n % k == 0)
        {
            d = n / k;
            cout << d << endl;
        }
        else
        {
            d = __gcd(n, k);
            p = (n / d);
            cout << p << endl;
        }
    }
    return 0;
}
