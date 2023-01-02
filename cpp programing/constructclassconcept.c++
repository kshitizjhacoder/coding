#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    bool gender;

public:
    // default constructor
    student()
    {
        name = '\0';
        age = 0;
        gender = true;
    }
    // prarameter constructor
    student(string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }
    // copy constructor
    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    void setname(string s)
    {
        name = s;
    }
    void setage(int a)
    {
        age = a;
    }
    void setgender(string gen)
    {
        if (gen == "male")
            gender = 1;
        else
            gender = 0;
    }
    void display()
    {
        cout << name << " " << age << " " << gender << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
            return true;
        return false;
    }
};
int main()
{
    // string name, gender;
    // int age;
    // student s1;
    // cout << "enter the name of the student ";
    // cin >> name;
    // cout << "Ente the age of the student ";
    // cin >> age;
    // cout << "Enter the gender of the student ";
    // cin >> gender;
    // s1.setname(name);
    // s1.setage(age);
    // s1.setgender(gender);
    // s1.display();
    student a("kshitiz", 20, true);
    a.display();
    student b;
    b.display();
    student c = a;
    c.display();
}