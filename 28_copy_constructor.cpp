//Copy Constructor
#include <iostream>
using namespace std;

class math
{
    private:
    int a,b,c;
    public:
    math(int x, int y)
    {
        a = x;
        b = y;
    }
    math(math &x) //Copy Constructor
    {
        a = x.a;
        b = x.b;
    }
    void add()
    {
        c = a + b;
        cout<<"Addition is : "<<c<<endl;
    }
};
int main()
{
    math obj(10,25);
    math obj1(obj);   //Copy Constructor
    obj.add();
    obj1.add();
    return 0;
}