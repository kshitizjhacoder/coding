#include <iostream>
using namespace std;

int main()
{
    int n, i, j, sp, k;
    cout << "Enter the size of pattern : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= 2 * (n - i); sp++)
            cout << " ";
        for (j = i; j > 0; j--)
            cout << j << " ";
        for (k = 2; k <= i; k++)
            cout << k << " ";
        cout << "\n";
    }
    return 0;
}