#include <iostream>
using namespace std;

// single inheritance
// class A
// {
// public:
//     void function()
//     {
//         cout << "Function of class A is called\n";
//     }
// };
// class B : public A
// {
// };
// int main()
// {
//     B b;
//     b.function();
// }
// multiple inheritance
// class A
// {
// public:
//     void Afunction()
//     {
//         cout << "Called function is class A" << endl;
//     }
// };
// class B
// {
// public:
//     void Bfunction()
//     {
//         cout << "Called function is class B" << endl;
//     }
// };
// class C : public A, public B
// {
// public:
// };
// int main()
// {
//     C c;
//     c.Afunction();
//     c.Bfunction();
//     return 0;
// }
// multilevel inheritance
class A
{
public:
    void Afunction()
    {
        cout << "called function of A\n";
    }
};
class B : public A
{
public:
    void Bfunction()
    {
        cout << "Called function of class B\n";
    }
};
class C : public B
{
public:
};
int main()
{
    C c;
    c.Afunction();
    c.Bfunction();
    B b;
    b.Afunction();
    b.Bfunction();
}