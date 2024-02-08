#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"Enter a positive integer : ";
    cin>>a;
    int n = a % 2;
    switch(n){
        case 0:
        cout << "Number is Even.\n";
        break;

        case 1:
        cout << "Number is Odd.\n";
        break;
    }
    return 0;
}
