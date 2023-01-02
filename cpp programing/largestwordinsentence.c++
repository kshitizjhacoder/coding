#include <iostream>
using namespace std;

int main()
{
    string s;
    char ch;
    getline(cin, s);
    int l = s.length();
    int i, c = 0, max = 0, maxst = 0, st = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            if (c > max)
            {
                max = c;
                maxst = st;
            }
            c = 0;
            st = i + 1;
        }
        else
            c++;
    }
    cout << "Maximum of word length is :" << max << endl;
    for (i = maxst; i < max + maxst; i++)
        cout << s[i];
    cout << "\n";
}