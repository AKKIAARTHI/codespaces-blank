#include <iostream>
using namespace std;

class A
{
public:
    string item = "Diamond";
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};
int main()
{
    D obj;
    cout << obj.item << endl;
}
