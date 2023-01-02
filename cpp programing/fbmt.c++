#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, c = 0;
        string ele, s2nd;
        cin >> n;
        float half = ((float)n / 2);
        vector<string> name;
        for (i = 0; i < n; i++)
        {
            cin >> ele;
            name.push_back(ele);
            if (name[0] == ele)
                c++;
            else
                s2nd = name[i];
        }
        if (c > half)
            cout << name[0] << endl;
        else if (c < half)
            cout << s2nd << endl;
        else
            cout << "tie" << endl;
    }
    return 0;
}