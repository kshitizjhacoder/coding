#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, c = 0;
        cin >> n;
        int arr[n + 1];
        arr[n] = 0;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        i = 0;
        j = 1;
        while (j < n)
        {
            if ((arr[i] % 3) == 0)
            {
                i++;
                j++;
            }
            else
            {
                arr[i] -= 1;
                arr[j] += 1;
                if ((arr[i] % 3) == 0 && (arr[j] % 3) == 0)
                {
                    c++;
                    j++;
                    i++;
                }
            }
        }
        if (arr[0] % 3 == 0 && arr[1] % 3 == 0)
        {
            cout << c << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}