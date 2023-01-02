#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the length : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j > 0; j--)
            cout << (j % 2);
        cout << "\n";
    }
    return 0;
}