#include <stdio.h>
int main()
{
    int marks[4], i, n, sum = 0, average; // 2,5
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    for (i = 0; i <= n; i++)
    {
        printf("Enter number%d: %d \n", i + 1, marks[i]);
    }
    printf("Sum = %d", sum);
    average = sum / n;
    printf("Average = %d", average);
    return 0;
}