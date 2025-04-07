/*
#include <iostream>
using namespace std;

class A
{
    private:
    int x,y;
    public:
    friend void setData();
};
void setData()
{
    A obj;
    obj.x = 10;
    obj.y = 20;
    cout<<"X : "<<obj.x<<endl;
    cout<<"Y : "<<obj.y<<endl;
    cout<<"Sum : "<<obj.x + obj.y<<endl;
}
int main()
{
    setData();
    return 0;
}
*/

// Friend function 2
#include <iostream>
using namespace std;

class A
{
    private:
    int x;
    public:
    A()
    {
        x = 0;
    }
    void print()
    {
        cout<<"X : "<<x<<endl;
    }
    friend void setData(A &obj, int a); // A is a friend function of A
};
void setData(A &obj, int a)
{
    obj.x = a; // A is a friend function of A
}
int main()
{
    A obj;
    obj.print();
    setData(obj, 25);
    obj.print();
    return 0;
}