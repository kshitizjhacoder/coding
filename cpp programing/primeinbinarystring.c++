#include <iostream>
using namespace std;

int bintoDecimal(string binary, int i)
{
    int n = binary.length();
    if (i == n - 1)
        return binary[i] - '0';
    return ((binary[i] - '0') << (n - i - 1)) +
           bintoDecimal(binary, i + 1);
}
void prime(int num)
{
    if (num % 2 != 0)
    {
        for (int i = 2; i < num / 2; i++)
            if (num % i == 0)
                cout << "YES" << endl;
        cout << "NO" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    // cin >> t;
    // while (t--)
    // {
    string str;
    cin >> str;
    prime(bintoDecimal(str, 0));
    //}
}