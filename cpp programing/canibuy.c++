#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        if (c > 0)
            s = s + (c / 100) * s;
        else
            s = s - (c / 100) * s;
        if (s > a && s < b)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
