#include <iostream>
using namespace std;

int main()
{
    int i, j, n, temp;
    cout << "Enter the length of array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}