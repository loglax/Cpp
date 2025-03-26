//Constructor Overloading
//Copy Constructor
#include <iostream>
using namespace std;

//using same function with different parameters is constructor overloading
class math
{
    private:
    int a,b,c;
    public:
    math()       //Default Constructor
    {
        a = 0;
        b = 0;
    }
    math(int x, int y)  //Parameterized Constructor
    {
        a = x;
        b = y;
    }
    math(math &x) //Copy Constructor
    {
        a = x.a;
        b = x.b;
    }
    void add()
    {
        c = a + b;
        cout<<"Addition is : "<<c<<endl;
    }
};
int main()
{
    math obj1;         //Default Constructor
    math obj2(10,25);  // Parameterized Constructor
    math obj3(obj2);   //Copy Constructor
    obj1.add();
    obj2.add();
    obj3.add();
    return 0;
}