#include <iostream>
using namespace std;

int main()
{
    int l, b, i, j;
    cout << "Enter the length\n";
    cin >> l;
    cout << "Enter the breadth\n";
    cin >> b;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (i == 0 || j == 0 || i == l - 1 || j == b - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}