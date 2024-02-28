#include <iostream>
using namespace std;
class Parent
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class PublicChild : public Parent
{
    // public members are public in Child
    // protected members are protected in Child
    // private members are not accessible from Child
public:
    int getProtected()
    {
        return b;
    }
};

class ProtectedChild : protected Parent
{
    // public and protected members are protected in Child
    // private members are not accessible from Child
public:
    int getPublic()
    {
        return a;
    }
    int getProtected()
    {
        return b;
    }
};

class PrivateChild : private Parent
{
    // public and protected members are private in Child
    // private members are not accessible from Child
public:
    int getPublic()
    {
        return a;
    }
    int getProtected()
    {
        return b;
    }
};

int main()
{
    PublicChild obj1;
    ProtectedChild obj2;
    PrivateChild obj3;

    cout << "In Public Inheritance" << endl;
    cout << "Public Member : " << obj1.a << endl;
    cout << "Protected Member : " << obj1.getProtected() << endl;

    cout << "In Protected Inheritance" << endl;
    cout << "Public Member : " << obj2.getPublic() << endl;
    cout << "Protected Member : " << obj2.getProtected() << endl;

    cout << "In Private Inheritance" << endl;
    cout << "Public Member : " << obj3.getPublic() << endl;
    cout << "Protected Member : " << obj3.getProtected() << endl;
}
