/*
Using a constructor and destructor in C++, Write a C++ class 'Student' and assign the following :
* string fullName
* int rollNum
* double semPerentage
* string collegeName
* int collegeCode
*/

#include <iostream>
using namespace std;

class Student
{
public:
    string fullName, collegeName;
    int rollNumber, collegeCode;
    double semPercentage;
    Student(string sfullName, int srollNumber, double ssemPercentage, string scollegeName, int scollegeCode)
    {
        fullName = sfullName;
        rollNumber = srollNumber;
        semPercentage = ssemPercentage;
        collegeName = scollegeName;
        collegeCode = scollegeCode;
    }
    Student()
    {
        fullName = "Rahul S";
        rollNumber = 572;
        semPercentage = 90.0;
        collegeName = "MVGRCE";
        collegeCode = 33;
    }
    ~Student()
    {
        cout << "DEAD" << endl;
    }

    void display()
    {
        cout << "Full Name : " << fullName << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Sem Percentage : " << semPercentage << endl;
        cout << "College Name : " << collegeName << endl;
        cout << "College Code : " << collegeCode << endl;
    }
};

int main()
{
    Student student1;
    Student student2("Shiva k", 589, 95, "MVGRCE", 33);
    cout << "-------------------Student-1 Details----------------------" << endl;
    student1.display();
    cout << "-------------------Student-2 Details----------------------" << endl;
    student2.display();
}
