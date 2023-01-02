#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int n, m, i, d;
    cout << ("Enter yor number\n");
    cin >> n;
    m = n;
    i = 0;
    while (m != 0)
    {
        d = m % 100;
        a[i] = d;
        m = m / 100;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}