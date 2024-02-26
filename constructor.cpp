#include <iostream>
using namespace std;

class Student
{
public:
    string fullName, collegeName;
    int collegeCode;
    double semPercentage;
    // Default constructor
    Student()
    {
        collegeName = "MVGR";
        collegeCode = 33;
    }

    // Parameterized constructor
    Student(Student &obj)
    {
        cout << "Enter name : ";
        getline(cin, obj.fullName);
        cout << "Enter semPercentage : ";
        cin >> obj.semPercentage;
    }
    ~Student()
    {
        cout << "DEAD" << endl;
    }

    void display()
    {
        cout << "Full Name : " << fullName << endl;
        cout << "Sem Percentage : " << semPercentage << endl;
        cout << "College Name : " << collegeName << endl;
        cout << "College Code : " << collegeCode << endl;
    }
};

int main()
{
    Student student1;
    Student student2 = student1;
    cout << "-------------------Student-1 Details----------------------" << endl;
    student1.display();
}
