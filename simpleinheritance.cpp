#include <iostream>
using namespace std;
class college
{
public:
    string collegeName = "MVGR";
    int collegeCode = 33;
};

class student : public college
{
public:
    string name = "Ajay";
    int roll = 123;
};

int main()
{
    student obj;
    cout << obj.name << endl;
    cout << obj.roll << endl;
    cout << obj.collegeName << endl;
    cout << obj.collegeCode << endl;
}
