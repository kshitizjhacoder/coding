#include <iostream>

using namespace std;

int lcm(int a, int b)
{
    int max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

int main()
{
    int a = 1000, b = 999;
    int l = lcm(a, b);
    cout << l << endl;
    return 0;
}