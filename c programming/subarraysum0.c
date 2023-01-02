#include <stdio.h>
#include <stdlib.h>
int checksum(int a[], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            sum += a[j];
        }
        if (sum == 0)
            return 1;
    }
    return 0;
}
int main()
{
    int n, a[10];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int boo = checksum(a, n);
    if (boo == 1)
        printf("Sum of 0 is present \n");
    else
        printf("Sum of 0 is not present\n");
    return 0;
}
