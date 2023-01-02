#include <iostream>
using namespace std;

int selectionsort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    return a[n - 1];
}
int main()
{
    int i, n, max;
    cout << "Enter the length of the array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements \n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the ith value to search for the max : ";
    cin >> i;
    cout << "\nHighest value till that is : " << selectionsort(arr, i);
    return 0;
}