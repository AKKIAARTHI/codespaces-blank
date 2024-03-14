#include <iostream>
using namespace std;
class Job
{
public:
    virtual void work() = 0;

    void salary()
    {
        cout << "Earning enough money..." << endl;
    }
};

class Mechanic : public Job
{
public:
    void work()
    {
        cout << "Mechanicher repairs the vehiles" << endl;
    }
};

class Teacher : public Job
{
public:
    void work()
    {
        cout << "Teacher teaches to students" << endl;
    }
};

int main()
{
    Mechanic Mechanicher;
    Teacher Sir;
    Mechanicher.work();
    Mechanicher.salary();
    Sir.work();
}
