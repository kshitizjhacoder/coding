#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, t1, t2, t3;
    cin >> n;
    t1 = n / 2;
    t2 = n / 3;
    t3 = n / 4;
    int sum = t1 + t2 + t3;
    if (sum > n)
        cout << sum << endl;
    else
        cout << n << endl;
}
