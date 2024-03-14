#include <iostream>
using namespace std;
template <typename TEM> class TEMclass{
    private:
    TEM item1,item2;
    public:
    TEMclass(){}
    TEMclass(TEM a, TEM b){
        item1 = a;
        item2 = b;
    }
    TEM add(TEM a, TEM b){
        return a + b;
    }
};
template <typename T>
T sum(T x, T y){
    return x+y;
}

int main(){
    TEMclass<int> obj;
    cout << obj.add(10,15) << endl;
    TEMclass<float> obj2;
    cout << obj2.add(10.25,15.50) << endl;
    //Template function
    cout << sum<int>(1700,29) << endl;
    cout << sum<string>("MVGR","College") << endl;
    return 0;
}
