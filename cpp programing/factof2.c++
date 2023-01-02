#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int a, b;
    int var_1, var_2;
    cout << "Enter the value of two number\n";
    cin >> a >> b;
    var_1 = factorial(a);
    var_2 = factorial(b);
    cout << var_1 << " " << var_2;
}
int factorial(int n)
{
    int f = 1, i;
    if (n == 0)
        return 1;
    else
    {
        for (i = n; i > 0; i--)
            f = f * i;
        return f;
    }
}