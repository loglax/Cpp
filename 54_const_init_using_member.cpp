//Initialized Const variable using member function
#include <iostream>
using namespace std;

class base
{
    private:
    const int x;
    public:
    base(int a):x(a)
    {
        cout<<"The value of x is : "<<x<<endl;
    }
};
int main()
{
    base obj(25);
    return 0;
}