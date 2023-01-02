#include <iostream>
using namespace std;

int prime(int n);
int main()
{
    int var_1, var_2;
    int k, i;
    cout << "Enter the value of limit\n";
    cin >> var_1 >> var_2;
    for (i = var_1; i <= var_2; i++)
    {
        k = prime(i);
        if (k == 2)
            cout << i << "is prime\n";
        else
            continue;
    }
    return 0;
}
int prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            c++;
    return c;
}