#include <iostream>
using namespace std;

void tohi(int n, char src, char temp, char dest)
{
    if (n == 0)
        return; // base condition
    tohi(n - 1, src, dest, temp);
    cout << "Move from " << src << " to " << dest << endl;
    tohi(n - 1, temp, src, dest);
}
int main()
{
    tohi(3, 'A', 'B', 'C');
}