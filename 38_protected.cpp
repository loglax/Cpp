//Protected Access Specifiers
#include <iostream>
using namespace std;

class A
{
    protected:
    int x;
};
class B:public A
{
    public:
    void getData()
    {
        cout<<"Enter The Value Of X : ";
        cin>>x;
    }
    void display()
    {
        cout<<"X : "<<x;
    }
};
int main()
{
    B obj;
    obj.getData();
    obj.display();
    return 0;
}