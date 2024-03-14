#include <iostream>
using namespace std;
class OpOl{
    public:
    int x,y;
    OpOl(){}
    OpOl(int a, int b){
            x = a;
            y = b;
        }
    
    OpOl operator-(const OpOl & temp ){
        OpOl result;
        result.x = x - temp.x;
        result.y = y - temp.y;
        return result;
    }
};


int main(){
    OpOl obj1 = OpOl(10,20);
    OpOl obj2 = OpOl(30,40);
    OpOl obj3;
    obj3 = obj1-obj2;
    cout << "obj1.x : " << obj1.x << "  obj1.y : " << obj1.y << endl;
    cout << "obj2.x : " << obj2.x << "  obj2.y : " << obj2.y << endl;
    cout << "obj3.x : " << obj3.x << "  obj3.y : " << obj3.y << endl;
}
