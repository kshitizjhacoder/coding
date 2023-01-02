#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        y = x;
        cin >> x;
        if (i == 0)
            a[i] = x;
        else
            a[i] = x & y;
    }
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}