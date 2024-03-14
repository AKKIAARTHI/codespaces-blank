#include <iostream>
using namespace std;
class MeOl
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{

    MeOl obj;
    cout << "add(int 10, int 20) : " << obj.add(10, 20) << endl;
    cout << "add(double 25.34, double 73.57) : " << obj.add(25.34, 73.57) << endl;
    cout << "add(int 10, int 20, int 30) : " << obj.add(10, 20, 30) << endl;
}
