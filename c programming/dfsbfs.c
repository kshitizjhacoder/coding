#include <stdio.h>
#include <stdlib.h>
int a[10][10];
int f[10];
void read_adj(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
// void dfs(int u, int n)
// {
//     int st[20], i, top = -1;
//     f[u] = 1;
//     printf("Node reachable from %d ", u);
//     st[++top] = u;
//     // printf("%d ", u);
//     while (top != -1)
//     {
//         u = st[top--];
//         for (int v = 0; v < n; v++)
//         {
//             if (a[u][v] == 1 && f[v] == 0)
//             {
//                 printf("%d ", v);
//                 f[v] = 1;
//                 st[++top] = v;
//             }
//         }
//         printf("\n");
//     }
// }
void bfs(int u, int n)
{
    int q[20], v, front = 0, rear = -1;
    printf("Node reachable from %d ", u);
    q[++rear] = u;
    f[u] = 1;
    // printf("%d ", u);
    while (front <= rear)
    {
        u = q[front++];
        for (v = 0; v < n; v++)
        {
            if (a[u][v] == 1 && f[v] == 0)
            {
                printf("%d ", v);
                f[v] = 1;
                q[++rear] = v;
            }
        }
        printf("\n");
    }
}
int main()
{
    int n, i, source;
    printf("Enter the number of elements in the matrix\n");
    scanf("%d", &n);
    read_adj(n);
    for (source = 0; source < n; source++)
    {
        for (i = 0; i < n; i++)
            f[i] = 0;
        bfs(source, n);
    }
}