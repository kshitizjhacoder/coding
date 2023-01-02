#include <iostream>
using namespace std;

int main()
{
    int i, j, n, sp;
    cout << "ENter the size of rhombus : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (sp = 1; sp < n - i; sp++)
            cout << " ";
        for (j = 0; j < n; j++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}