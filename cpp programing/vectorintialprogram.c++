#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int ele;
    vector<int> v;
    while (1)
    {
        cout << "Enter your element ";
        cin >> ele;
        if (ele == 0)
            break;
        v.push_back(ele);
    }
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
    for (auto i : v)
        cout << i << endl;
    vector<int> v2(3, 50); // 50 50 50
    swap(v, v2);
    for (auto i : v)
        cout << i << endl;
    for (auto i : v2)
        cout << i << endl;
}