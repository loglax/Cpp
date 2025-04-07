//Friend class
#include <iostream>
using namespace std;
class B;
class A
{
    private:
    int x = 10;
    friend B; // B is a friend class of A
};

class B
{
    public:
    void display()
    {
        A obj;
        cout<<"X : "<<obj.x<<endl; // A is a friend class of B
    }
};
int main()
{
    B obj;
    obj.display();
    return 0;
}