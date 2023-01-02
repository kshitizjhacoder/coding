#include <iostream>
using namespace std;

int *selectionsort(int arr[])
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
    return arr;
}
int main()
{
    int n, i, j, m = 0, k;
    cout << "Enter the total number of horses : ";
    cin >> n;
    int total[n];
    cout << "Enter the speed of all the horses : \n";
    for (i = 0; i < n; i++)
        cin >>
            total[i];
    int a;
    int a1[5], max[5], sort_a1[5];
    i = 0;
    while (i > n)
    {
        k = i;
        i += 5;
        for (j = 0; j < 5; j++)
        {
            a1[j] = a1[k];
            k++;
        }
        sort_a1[m] = *selectionsort(a1);
        m++;
    }
    for (i = 0; i < n; i++)
        cout << sort_a1[i] << " ";
}