#include <stdio.h>
#include <stdlib.h>
int N, M;
void subsetofarr(int a[100], int arr[][2], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++, k++)
        {
            arr[k][0] = a[i];
            arr[k][1] = a[j];
            printf("%d %d ,", arr[k][0], arr[k][1]);
        }
        printf(" , ");
    }
    printf("\n");
}
void readadjmat(int adj[][N + 1], int arr[][2])
{
    for (int i = 0; i < N + 1; i++)
        for (int j = 0; j < N + 1; j++)
            adj[i][j] = 0;
    for (int i = 0; i < M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
}
int checkpartialorder(int arr[][2])
{
    for (int i = 0; i < M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];
        if (x == y)
            continue;
        else
        {
            // antisysmetric
            for (int j = i + 1; j < M; j++)
            {
                int a = arr[j][0];
                int b = arr[j][1];
                if (a == y && b == x)
                    return 0;
            }
            // transitive
            for (int j = i + 1; j < M; j++)
            {
                int a = arr[j][0];
                if (y == a)
                {
                    int b = arr[j][1];
                    for (int k = 0; k < j; k++)
                    {
                        int c = arr[k][1];
                        if (b == c)
                        {
                            int d = arr[k][0];
                            if (d != x)
                                return 0;
                            else
                                break;
                        }
                        continue;
                    }
                }
            }
        }
    }
    return 1;
}
void printAdjMatrix(int Adj[][N + 1])
{
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            printf("%d ", Adj[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    N = 3;
    M = 6;
    int a[100] = {1, 2, 3};
    int arr[100][2];
    subsetofarr(a, arr, 3);
    int adj[N + 1][N + 1];
    readadjmat(adj, arr);
    printAdjMatrix(adj);
    if (checkpartialorder(arr))
        printf("Yes");
    else
        printf("NO");
}