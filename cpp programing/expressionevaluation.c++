#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll x;
    cin >> x;
    if (x < -4)
        cout << x + 5 << endl;
    else if (x >= -4 && x <= 7)
        cout << x * x - (3 * x) << endl;
    else
        cout << x * x * x + 2 * x;
    return 0;
}
