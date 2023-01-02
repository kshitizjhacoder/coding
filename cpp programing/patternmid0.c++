#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == n / 2 || j == n / 2)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
}