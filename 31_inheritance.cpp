/*
Inheritance is the process by which object of one class acquired the properties of another
classes.
*/
/*
Single Inheritance 
Single Inheritance , a class derives from one base class only. 
This means that there is only one subclass that is derived from one superclass.
                class A    Base class / Parent class / Super class
                    |
                    |
                    |
                class B    Derived class / Child class / Sub class

*/
#include <iostream>
using namespace std;

class father
{
    public:
    void house()
    {
        cout<<"I have Own 2BHK house"<<endl;
    }
};

class son:public father
{
    public:
    void car()
    {
        cout<<"I have own Audi car"<<endl;
    }
};

int main()
{
    son obj;
    obj.house();
    obj.car();
    return 0;
}