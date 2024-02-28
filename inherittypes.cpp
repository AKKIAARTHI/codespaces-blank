#include <iostream>
using namespace std;

// Base Class
class College
{
public:
    College()
    {
        cout << "College" << endl;
    }
};

// Base Class
class Department
{
public:
    Department()
    {
        cout << "Department" << endl;
    }
};

// Base Class
class College2
{
public:
    College2()
    {
        cout << "College2" << endl;
    }
};

// simple Inheritance
class Department2 : public College2
{
public:
    Department2()
    {
        cout << "Department2 inherits College2" << endl;
    }
};

// Multilevel Inheritance
class Student2 : public Department2
{
public:
    Student2()
    {
        cout << "Student2 inherits Department2" << endl;
    }
};

// Multiple Inheritance
class Hod : public Department, public College
{
public:
    Hod()
    {
        cout << "Hod inherits Department and College" << endl;
    }
};

// Here Teacher class inherits Department class(Hierarchical Inheritance)
class Teacher : public Department
{
public:
    Teacher()
    {
        cout << "Teacher inherits Department" << endl;
    }
};

// Here Student class inherits Department class(Hierarchical Inheritance)
class Student : public Department
{
public:
    Student()
    {
        cout << "Student inherits Department" << endl;
    }
};

int main()
{
    cout << "Simple Inheritance" << endl;
    Department2 simple;

    cout << endl;

    cout << "Multilevel Inheritance" << endl;
    Student2 multilevel;

    cout << endl;
    cout << "Multiple Inheritance" << endl;
    Hod multiple;

    cout << endl;

    cout << "Hierarchical Inheritance" << endl;
    Teacher obj1;
    Student obj2;
}
