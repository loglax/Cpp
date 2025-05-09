/*
A constructor in C++ is a special '_MEMBER FUNCTION' having the same name as that of its 
class which is used to initialize some valid values to the data members of an object.
It is excuted automatically whenever an object of a class is created.
     1. Default Constructor
     2. Parameterized Constructor
     3. Copy Constructor   
*/

//Default Constructor  //the class name and constructor name are same and give a constructor only public class
#include <iostream>
using namespace std;

class math
{
    private:
    int a,b,c;
    public:
    math()//Default Constructor
    {
        a = 10;
        b = 20;
    }
    void add()
    {
        c = a + b;
        cout<<"Addition is : "<<c<<endl;
    }
};
int main()
{
    math obj;
    obj.add();
    return 0;
}
