#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct LIST
{
    int days;
    int pen;
    int ind;
};
bool proportion(LIST a1, LIST a2)
{
    double r1 = (double)a1.pen / a1.days;
    double r2 = (double)a2.pen / a2.days;
    if (r1 != r2)
        return r1 > r2;
    return a1.ind < a2.ind;
}
int main()
{
    int n;
    cin >> n;
    vector<LIST> l;
    int curr, max = INT_MIN;
    int id[10000];
    for (int i = 0; i < n; i++)
    {
        LIST li;
        cin >> li.days >> li.pen;
        li.ind = i + 1;
        l.push_back(li);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << l[i].days << " " << l[i].pen << " " << l[i].ind << endl;
    // }
    sort(l.begin(), l.end(), proportion);
    for (int i = 0; i < n; i++)
        cout << l[i].ind << " ";
    cout << endl;
    return 0;
}
