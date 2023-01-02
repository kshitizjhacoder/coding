#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, xs, ys, xm, dx, dy, ym, c = 0;
        cin >> n >> xs >> ys;
        if (n == 1)
        {
            cout << c << endl;
            break;
        }
        xm = (n + 1) / 2;
        ym = (n + 1) / 2;
        if ((xs - ys) % 2 == 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
}
