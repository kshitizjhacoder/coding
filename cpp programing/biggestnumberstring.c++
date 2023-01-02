#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int arr[100], i = 0;
    cout << "print the numeric number\n";
    getline(cin, s);
    int n = stoi(s);
    while (n != 0)
    {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }
    cout << "Max element : " << *max_element(arr, arr + i) << endl;
}