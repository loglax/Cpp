//Add value to base class constructor
#include <iostream>
using namespace std;

class Base
{
    private:
    int x;
    public:
    Base(int a) : x(a)
    {
        cout<<"The value of Base X is : "<<x<<endl;
    }
};
class Child:public Base
{
    private:
    int y;
    public:
    Child(int a,int b) :Base(a), y(b)
    {
        cout<<"The value of Child Y is : "<<y<<endl;
    }
};
int main()
{
    Child obj(25,35);
    return 0;
}