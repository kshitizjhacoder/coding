#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int frequency(char str[], int a[])
{
    int i, l, j, c = 0;
    l = strlen(str);
    for (i = 0; i < l - 1; i++)
    {
        for (j = i; j < l; j++)
            if (str[i] == str[j])
                a[i]++;
    }
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (a[i] <= a[j])
                c++;
        }
        if (c == 0)
            return i;
    }
    return -1;
}
int main()
{
    int i, n;
    char str[100];
    int a[100] = {0};
    cout << "Enter the number of character :";
    cin >> n;
    cout << "Enter the characters\n";
    for (i = 0; i < n; i++)
        cin >> str[i];
    int x = frequency(str, a);
    cout << str[x] << endl;
}