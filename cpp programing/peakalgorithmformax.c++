#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n, max = INT_MIN;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    while (n != 1)
    {
        max = (max > n) ? max : n;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
    }
    cout << max << endl;
    return 0;
}
