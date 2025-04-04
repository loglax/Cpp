/*
    Unary Operator Overloading in C++
*/
 
#include<iostream>
using namespace std;
class box
{
private:
    int x;
public:
    box()
    {
        x=0;
    }
    box(int a)
    {
        x=a;
    }
 
    void print()
    {
        cout<<"X : "<<x<<endl;
    }
 
    void operator ++()
    {
        ++x;
    }
    void operator ++(int)
    {
        x++;
    }
};
int main()
{
    box o;
    o.print();
    ++o;
    o.print();
    o++;
    o.print();
    return 0;
}