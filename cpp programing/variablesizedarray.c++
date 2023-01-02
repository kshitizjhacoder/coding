#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n, k, i, j, q, st, end;
    cin >> n >> q;
    vector<int> vec1[n];
    for (i = 0; i < n; i++)
    {
        cin >> j;
        while (j--)
        {
            cin >> k;
            vec1[i].push_back(k);
        }
    }
    while (q--)
    {
        cin >> st >> end;
        cout << vec1[st][end] << endl;
    }
}