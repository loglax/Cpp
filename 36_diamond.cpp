/*
Diamond Problem
*/
#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor A"<<endl;
    }
};
class B:virtual public A
{
    public:
    B()
    {
        cout<<"Constructor B"<<endl;
    }
};
class C:virtual public A
{
    public:
    C()
    {
        cout<<"Constructor C"<<endl;
    }
};
class D:public B,public C
{
    public:
    D()
    {
        cout<<"Constructor D"<<endl;
    }
};

int main()
{
    D obj;
    return 0;
}