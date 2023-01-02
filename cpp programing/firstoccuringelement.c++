#include <iostream>
using namespace std;

int minindex(int arr[], int n)
{
    int i, min = 9999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            min = (min < arr[i]) ? min : arr[i];
    }
    return min;
}
int main()
{
    int n, i, j, arr[10000], cont[10000] = {0}, min;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    i = 0;
    while (i < n - 1)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
                cont[i] = i;
        }
        i++;
    }
    min = minindex(cont, n);
    cout << min;
    return 0;
}