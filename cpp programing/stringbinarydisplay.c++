#include <bits/stdc++.h>
using namespace std;

int bintoDecimal(string binary, int i)
{
    int n = binary.length();
    if (i == n - 1)
        return binary[i] - '0';
    return ((binary[i] - '0') << (n - i - 1)) +
           bintoDecimal(binary, i + 1);
}

int main()
{
    string bin = "1010";
    cout << bintoDecimal(bin, 0) << endl;
}