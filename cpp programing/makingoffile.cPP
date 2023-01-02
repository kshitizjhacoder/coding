#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream os("aab.txt");
    if (os.is_open())
    {
        char data[] = "Foo";
        os.write(data, 3);
    }
    ifstream in("foo.txt");
    if (in.is_open())
    {
        string s;
        in >> s;
        cout << s;
    }
}
