#include <iostream>
using namespace std;

int *bubbleSort(int arr[], int n)
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
int main()
{
    int i, c = 0, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    arr[0] = *bubbleSort(arr, i);
    /*for (i = 0; i < n; i++)
        cout << arr[i] << " ";*/
    for (i = 0; i < n; i++)
    {
        if (arr[i] == c)
        {
            c++;
            continue;
        }
        else
        {
            cout << c << " is missing";
            break;
        }
    }
    return 0;
}