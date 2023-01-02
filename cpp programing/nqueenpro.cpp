#include <iostream>
#include <algorithm>
using namespace std;

bool issafe(int **arr, int x, int y, int n)
{
    int i, j;
    for (i = x; i >= 0; i--)
        if (arr[i][y] == 1)
            return false;
    i = x;
    j = y;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == 1)
            return false;
        i--;
        j--;
    }
    i = x;
    j = y;
    while (i >= 0 && j < n)
    {
        if (arr[i][j] == 1)
            return false;
        i--;
        j++;
    }
    return true;
}
bool assignqueen(int **arr, int x, int n)
{
    int j;
    if (x >= n)
        return true;
    for (j = 0; j < n; j++)
    {
        if (issafe(arr, x, j, n))
        {
            arr[x][j] = 1;
            if (assignqueen(arr, x + 1, n))
                return true;
            arr[x][j] = 0; // backtracking
        }
    }
    return false;
}
int main()
{
    cout << "Enter the sides of chessboard\n";
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }
    if (assignqueen(arr, 0, n))
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
}