/*
Hybrid Inheritance
Hybrid Inheritanceis usually a combination of more than one type of inheritance.

            class A
                |
                |
                |
            class B       class C
                \           /
                 \         /
                  \       /
                   \     /
                   class D
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
class mother
{
    public:
    void gold()
    {
        cout<<"24g Gold"<<endl;
    }
};
class son:public father, public mother
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
    obj.gold();
    obj.car();
    return 0;
}