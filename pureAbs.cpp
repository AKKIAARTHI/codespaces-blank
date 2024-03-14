#include <iostream>
using namespace std;
class Job
{
public:
    virtual void work() = 0;
};

class Mechanic : public Job
{
public:
    void work()
    {
        cout << "Mechanicher repairs the vehicles" << endl;
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
    Sir.work();
}
