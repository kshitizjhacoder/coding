#include <bits/stdc++.h>
using namespace std;
// Zeller's Algorithm
char weekdays[7][11] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
char monthname[12][11] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main()
{
    int w, i, m, d, y, c, year; // w=weekday,m=monthcode,d=date,y=lasttwodigitofyear,c=firstteodigit
    cout << "Enter the date\n";
    cin >> d;
    string month;
    cout << "Enter the month\n";
    cin >> month; // getline (cin, fullName);//first letter cApital
    cout << "Enter the year\n";
    cin >> year;
    for (i = 0; i < 12; i++)
    {
        if (month == monthname[i])
        {
            if (i == 0)
            {
                m = 13;
                year--;
            }
            else if (i == 1)
            {
                m = 14;
                year--;
            }
            else
                m = (i - 2) + 1;
        }
    }
    y = year % 100;
    c = year / 100;
    cout << d << " " << m << " " << y << " " << c << endl;
    w = d + floor((13 * (m + 1)) / 5) + y + floor(y / 4) + floor(c / 4) + 5 * c; // 229
    w = w % 7;
    cout << w;
};