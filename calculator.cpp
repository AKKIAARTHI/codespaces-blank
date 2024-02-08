#include<iostream>
using namespace std;
int main() {
    int a,b,ch;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"1.add"<<endl<<"2.subtract"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl;
    cout<<"enter operator : ";
    cin>>ch;
    switch(ch) {
        case 1:cout<< a <<"+"<< b <<"="<< a+b <<endl;
        break;
        case 2:cout<< a <<"-"<< b <<"="<<a-b <<endl;
        break;
        case 3:cout<< a <<"*"<< b <<"="<< a*b <<endl;
        break;
        case 4:cout<< a <<"/"<< b <<"="<< a/b <<endl;
        break;
        default:cout<<"Enter valid operator"<<endl;
        break;
    }
}
