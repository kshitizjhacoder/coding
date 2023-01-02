#include <bits/stdc++.h>
using namespace std;
int arthematic(int arr[], int n)
{
    int diff[n - 1], i, k = 0, c = 0;
    for (i = n - 1; i > 0; i++)
        diff[i] = arr[i] - arr[i - 1];
    for (i = 0; i, n - 1; i++)
    {
        if (diff[k] == diff[i])
            c++;
    }
    if (c == n - 1)
        return n;
    else
        return -1;
}
int main()
{
    int arr[100], dif[20];
    int n, i, j, max = -1, k;
    cout << "Enter the number of test cases : ";
    cin >> n;
    cout << "Enter the elements are : \n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            dif[j] = arr[j];
        }
        k = arthematic(dif, n - j);
        max = (max > k) ? max : k;
    }
    cout << "Max value is : " << max;
    return 0;
}