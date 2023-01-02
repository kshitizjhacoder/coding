#include <iostream>
using namespace std;

int *selectionSort(int arr[], int n)
{
    int i, j, k;
    int *ptr;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                k = arr[j];
                arr[j] = arr[i];
                arr[i] = k;
            }
        }
    ptr = arr;
    return ptr;
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "found it : ";
            return mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << "Not found!\n";
    return -1;
}

int main()
{
    int i, j, n, key;
    cout << "Enter the length of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    arr[0] = *selectionSort(arr, n);
    cout << "Enter the element to be searched : ";
    cin >> key;
    cout << "\n"
         << binarySearch(arr, n, key);
    cout << "\nSorted array elements are : \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}