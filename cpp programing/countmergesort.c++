#include <iostream>
#include <algorithm>
using namespace std;
int merge(int arr[], int l, int mid, int r)
{
    int inv;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + l + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] > b[i])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}
int mergesort(int arr[], int l, int r)
{
    int inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergesort(arr, l, mid);
        inv += mergesort(arr, mid + l, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}
int main()
{
    int arr[] = {6, 5, 4, 7, 3, 9, 2, 8};
    int l = 0, r = 8;
    int inv = mergesort(arr, l, r);
    cout << inv << endl;
}