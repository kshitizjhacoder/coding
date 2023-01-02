#include <iostream>
using namespace std;

void primeseive(int n)
{
    int prime[100] = {0};
    int i, j;
    for (i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (j = i * i; j <= n; j += i)
                prime[j] = 1;
        }
    }
    for (j = 2; j <= n; j++)
    {
        if (prime[j] == 0)
            cout << j << " ";
    }
    cout << endl;
}
int main()
{
    int n, i, j;
    cin >> n;
    primeseive(n);
    return 0;
}