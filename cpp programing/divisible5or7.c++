#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int c1 = 0, c2 = 0;
    for (i = 5; i <= 40; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
            c1++;
        if (i % 5 == 0 && i % 7 == 0)
            c2++;
    }
    n = c1 - c2;
    cout << n << endl;
}