#include <stdio.h>
int lcm(int a, int b);
int minandmax(int min[], int max[]);
int main();
int lcm(int a, int b)
{
    int i, c;
    int t = b - a;
    int lcmmin[t], gcd = 1;
    c = 1;
    for (i = 0; i < t; i++)
    {
        while (c <= (a + c) && c <= a)
        {
            if (a % c == 0 && (a + c) % c == 0)
                gcd = c;
            c++;
        }
        lcmmin[i] = (a * (a + c)) / gcd;
    }
    gcd = 1;
    c = 1;
    int lcmmax[t];
    for (i = 0; i < t; i++)
    {
        while (c <= (b) && c <= (b - c))
        {
            if ((b - c) % c == 0 && (b) % c == 0)
                gcd = c;
            c++;
        }
        lcmmax[i] = ((b - c) * (b)) / gcd;
    }
}