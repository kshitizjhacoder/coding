#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n);
int main()
{
    int n, i;
    float rad, degree, sum = 0;
    printf("Enter the degree\n");
    scanf("%f", &degree);
    printf("Enter the limit till which we need to series \n");
    scanf("%d", &n);
    rad = degree * 3.14 / 180;
    for (i = 1; i <= n; i += 2)
    {
        if ((i - 1) % 4 == 0)
            sum = sum + pow(rad, i) / fact(i);
        else
            sum = sum - pow(rad, i) / fact(i);
    }
    printf("Calculated sin(%0.2f) = %f", degree, sum);
    printf("\nLibrary sin(%0.2f) = %f", degree, sin(rad));
}

int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}