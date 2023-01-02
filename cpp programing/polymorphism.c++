#include <bits/stdc++.h>
using namespace std;

class Working
{
public:
    void fun()
    {
        cout << "I am a funtion with no arguements\n";
    }
    void fun(int x)
    {
        cout << "It is a funtion integer arguements\n";
    }
    void fun(double y)
    {
        cout << " It is a function with double arguement\n";
    }
};

int32_t main()
{
    Working ob;
    ob.fun();
    ob.fun(4);
    ob.fun(2.4);
}