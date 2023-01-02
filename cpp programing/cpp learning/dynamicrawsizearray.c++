#include <iostream>
#include <algorithm>
using namespace std;

auto int_form(istream &in) -> int
{
    int x;
    in >> x;
    return x;
}
auto main() -> int
{
    cout << "Enter the number of elements \n";
    int n = int_form(cin);
    int *a = new int[n]; // dynamically allocating the memory
    cout << "Enter the your elements\n";
    for (int i = 0; i < n; i++)
        a[i] = int_form(cin);
    sort(a, a + n); // sort in increasing order
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    delete[] a; // delete the dynamically allocated memory
}