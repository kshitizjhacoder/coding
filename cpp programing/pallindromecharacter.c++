#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int l;
    string ch;
    cout << "Enter your string\n";
    cin >> ch;
    string ptr = ch;
    l = ch.size();
    reverse(ch.begin(), ch.end());
    if (ptr == ch)
        cout << "It's a pallindrome " << ch << endl;
    else
        cout << "It's not a pallindrome " << ch << endl;
}