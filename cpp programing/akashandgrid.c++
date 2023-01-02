#include <iostream>
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
        while ((xs != xm - 1 || xs != xm + 1 || xs != xm) && (ys != ym - 1 || ys != ym + 1 || ys != ym))
        {
            if (xs >= xm && ys >= ym)
            {
                xs = xs - 1;
                ys = ys - 1;
            }
            else if (xs >= xm && ys <= ym)
            {
                xs = xs - 1;
                ys = ys + 1;
            }
            else if (xs <= xm && ys >= ym)
            {
                xs = xs + 1;
                ys = ys - 1;
            }
            else if (xs <= xm && ys <= ym)
            {
                xs = xs + 1;
                ys = ys + 1;
            }
            cout << xs << " " << ys << endl;
            if ((xs == xm - 1 || xs == xm + 1 || xs == xm) && (ys == ym - 1 || ys == ym + 1 || ys == ym))
                break;
        }
        if ((xs == xm - 1 || xs == xm + 1 || xs == xm) && (ys == ym - 1 || ys == ym + 1 || ys == ym))
        {

            if ((xs - 1 == xm && ys - 1 == ym) || (xs - 1 == xm && ys + 1 == ym) || (xs + 1 == xm && ys - 1 == ym) || (xs + 1 == xm && ys + 1 == ym))
                c = c;
            else if ((xs == xm && ys - 1 == ym) || (xs == xm && ys + 1 == ym) || (xs - 1 == xm && ys == ym) || (xs + 1 == xm && ys == ym))
                c++;
        }
        cout << c << endl;
    }
}
