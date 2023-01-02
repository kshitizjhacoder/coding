#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, c = 0, d = 2, m;
        cin >> k;
        m = k;
        while (m % 2 == 0)
        {
            m = k / d;
            d = d * 2;
            c++;
        }
        cout << c << endl;
    }
}