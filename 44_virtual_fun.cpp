//Virtual function
/*

Virtual function is a function declared in base class and redefined in derived class.

#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void fun()
    {
        cout<<"Base class function called"<<endl;
    }
};
class Derived:public Base
{
    public:
    void fun()
    {
        cout<<"Derived class function called"<<endl;
    }
};
int main()
{
    Derived d;
    Base *b=&d;
    b->fun(); // Base class pointer can access derived class function
    return 0;
}

*/
//Virtual function is a function declared in base class and redefined in derived class.
#include <iostream>
using namespace std;

class vaccine
{
    public:
    virtual void putVaccine()
    {
        cout<<"Vaccine is put"<<endl;
    }
};
class covaxin:public vaccine
{
    public:
    void putVaccine()
    {
        cout<<"Put Covaxin Vaccine"<<endl;
    }
};
class covidshield:public vaccine
{
    public:
    void putVaccine()
    {
        cout<<"Put Covid Shield Vaccine"<<endl;
    }
};

int main()
{
    covaxin cx;
    covidshield cs;
    vaccine *v = NULL;
    v = &cx;
    v->putVaccine();
    v = &cs;
    v->putVaccine();
    return 0;
}