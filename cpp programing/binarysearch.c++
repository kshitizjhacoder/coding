#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid + 1;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int n, i, key;
    cout << "Enter the size of the array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the value store in array\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the key to be search : \n";
    cin >> key;
    cout << binarySearch(arr, n, key);
    return 0;
}