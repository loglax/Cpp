/*
Multiple Inheritance
Multiple Inheritance is a type of inheritance in which a class derives from more than one classes.
As shown in the below diagram, class C is a subclass that has class A and class B its parent.

        class A          class B
               \        /
                \      /
                 class C
*/
#include <iostream>
using namespace std;
 class father
 {
    public:
    void fishing()
    {
        cout<<"Learn Fishing"<<endl;
    }
 };

 class mother
 {
    public:
    void cooking()
    {
        cout<<"Learn Cooking"<<endl;
    }
 };

 class son:public father, public mother
 {
    public:
    void coding()
    {
        cout<<"Learn Coding"<<endl;
    }
 };

 int main()
 {
    son obj;
    obj.fishing();
    obj.cooking();
    obj.coding();
    return 0;
 }
