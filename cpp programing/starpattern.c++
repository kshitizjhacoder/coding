#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, sp;
    cout << "Enter the size of star : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= 2 * (n - i); sp++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "* ";
        for (k = 2; k <= i; k++)
            cout << "* ";
        cout << "\n";
    }
    for (i = 1; i <= n; i++)
    {
        for (sp = 0; sp < 2 * (i - 1); sp++)
            cout << " ";
        for (j = 0; j <= (n - i); j++)
            cout << "* ";
        for (k = 0; k < (n - i); k++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}