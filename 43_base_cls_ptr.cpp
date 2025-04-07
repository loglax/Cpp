//Base class pointer derived class object
#include <iostream>
using namespace std;

class Car
{
    public:
    void start()
    {
        cout<<"Car Started"<<endl;
    }
};
class BMW:public Car
{
    public:
    void AdvancedGear()
    {
        cout<<"Advanced Gear"<<endl;
    }
};
int main()
{
    BMW b;
    Car *ptr = NULL;
    ptr = &b;
    ptr->start(); // Base class pointer can access base class function
    //ptr->AdvancedGear(); // Error: Base class pointer cannot access derived class function
    return 0;
}