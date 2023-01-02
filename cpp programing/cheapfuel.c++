#include <iostream>
using namespace std;

int main()
{
    int t;
    int a[1000], b[1000], x, y, k, i;

    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a[i];

        cin >> b[i];

        cin >> x;

        cin >> y;
        cin >> k;
        while (k > 0)
        {
            a[i] += x;
            b[i] += y;
            k--;
        }
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] < b[i])
            cout << "PETROL\n";
        else if (b[i] < a[i])
            cout << "DIESEL\n";
        else
            cout << "SAME PRICE\n";
    }
    return 0;
}