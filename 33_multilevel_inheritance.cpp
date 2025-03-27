/*
Multilevel Inheritance
Multilevel Inheritance, a class is derived from another derived class.
This inheritance can have as many levels as long as our implementation.
In the below diagram, class C is derived from class B.
class B is in turn derived drom class A

                class A
                   ^
                   |
                   |
                   |
                class B
                   ^
                   |
                   |
                   |
                class C
*/
#include <iostream>
using namespace std;

class grandfather
{
    public:
    void house()
    {
        cout<<"3BHK house"<<endl;
    }
};
class father:public grandfather
{
    public: 
    void land()
    {
        cout<<"3 Arcs Land"<<endl;
    }
};
class son:public father
{
    public:
    void car()
    {
        cout<<"Audi car"<<endl;
    }
};
int main()
{
    son obj;
    obj.house();
    obj.land();
    obj.car();
    return 0;
}