//Narrowing conversion problem in Member Initializer
#include <iostream>
using namespace std;

class Base
{
    private:
    char x;
    public:
    Base(int a):x{a} //Narrowing conversion problem in Member Initializer
    {
        cout<<"The value of x is : "<<(int)x<<endl;
    }
};

int main()
{
    Base obj(25);
    return 0;
}