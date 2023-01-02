#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int limit, k, r, n;
    float comb;
    cout << "Enter the value of limit\n";
    cin >> limit;
    cout << "Enter the value of r\n";
    cin >> r;
    n = fact(limit);
    k = fact(limit - r);
    r = fact(r);
    comb = (float)(k * r);
    comb = (float)(n / comb);
    cout << "The value of the combinations is : " << comb;
    return 0;
}
int fact(int n)
{
    int f = 1, i;
    for (i = n; i > 0; i--)
        f = f * i;
    return f;
}