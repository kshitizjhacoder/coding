#include <stdio.h>
#include <stdlib.h>
void accept(int *a, int n)
{
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int search(int *a, int n, int key)
{
    int beg = 0;
    int end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return -1;
}
int main()
{
    int n, key;
    int *a;
    printf("Enter the number of elee\n");
    scanf("%d", &n);
    printf("Enter the key \n");
    scanf("%d", &key);
    a = (int *)malloc(sizeof(int) * n);
    accept(a, n); // accept(2000,5)
    int k = search(a, n, key);
    if (k == -1)
        printf("Not found\n");
    else
        printf("Found %d", k);
    return 0;
}