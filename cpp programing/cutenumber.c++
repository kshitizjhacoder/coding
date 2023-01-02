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
    ll num, m, sum = 0, prod = 1;
    cin >> num;
    m = num;
    int d;
    while (m != 0)
    {
        d = m % 10;
        sum = sum + d;
        prod = prod * d;
        m = m / 10;
    }
    m = sum + prod;
    if (m == num)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
