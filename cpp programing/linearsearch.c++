#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 12, 13, 14, 14, 15, 17, 18, 20};
    int i, key;
    cout << "Enter the key to be searched\n";
    cin >> key;
    for (i = 0; i < 9; i++)
    {
        if (key == arr[i])
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << "Not found\n";
    return 0;
}
