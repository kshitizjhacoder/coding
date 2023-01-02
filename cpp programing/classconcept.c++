#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;
};
int main()
{
    student s[2];
    s[0].name = "Kshitiz Jha";
    s[0].age = 20;
    s[0].gender = 1;
    s[1].name = "Aditya Sudhanshu";
    s[1].age = 20;
    s[1].gender = 1;
    for (int i = 0; i < 2; i++)
        cout << "Name is = " << s[i].name << " Age is = " << s[i].age << " Gender is = " << s[i].gender << endl;

    return 0;
}
