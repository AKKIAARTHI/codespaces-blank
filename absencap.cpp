#include "iostream"
using namespace std;
class AccesSpecifierDemo
{
    private:
    int priVar;
    
    protected:
    int proVar;

    public:
    int pubVar;

    void setVar(int priValue,int proValue,int pubValue)
    {
        priVar = priValue;
        proVar = proValue;
        pubVar = pubValue;
    }
    int getpriVar() 
    {
        return priVar;
    }
    int getproVar()
    {
        return proVar;
    }
    int getpubVar()
    {
        return pubVar;
    }
};
int main()
{
    AccesSpecifierDemo obj;
    obj.setVar(1,2,3);
    cout << "PriVar : "<< obj.getpriVar() << endl;
    cout << "ProVar : "<< obj.getproVar() << endl;
    cout << "PubVar :out << "PriVar : "<< obj.getpriVar() << e "<< obj.getpubVar() << endl;
}
