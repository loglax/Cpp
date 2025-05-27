//Parameterized Constructor
#include <iostream>
using namespace std;

class math
{
    private:
    int a,b,c;
    public:
    math(int x, int y)
    {
        a = x;
        b = y;
    }
    void add()
    {
        c = a + b;
        cout<<"Addition is : "<<c<<endl;
    }
};
int main()
{
    math obj(105,258);//Parameterized Constructor
    obj.add();
    return 0;
}