#include <iostream>
using namespace std;

int main()
{
    int n, i, j, sp;
    cout << "Enter the size\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (sp = 1; sp <= 2 * (n - i); sp++)
            cout << " ";
        for (j = i; j > 0; j--)
            cout << "*";
        cout << "\n";
    }
    for (i = n; i > 0; i--)
    {
        for (j = i; j > 0; j--)
            cout << "*";
        for (sp = 1; sp <= 2 * (n - i); sp++)
            cout << " ";
        for (j = i; j > 0; j--)
            cout << "*";
        cout << "\n";
    }
    return 0;
}