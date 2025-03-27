/*
Hierarchical Inheritance
Hierarchical Inheritance, more than one class inherits from a single base class

                                      class A
                                    /         \
                            class B             class C
                             /  \                  /   \
                            /    \                /     \
                      class D     class E     class F   class G
*/
#include <iostream>
using namespace std;

class shape
{
    public:
    float length, breadth, radius;
};
class rectangle:public shape
{
    public:
    void getrectangleData()
    {
        cout<<"Enter Length  : ";
        cin>>length;
        cout<<"Enter Breadth : ";
        cin>>breadth;
    }
    float rectangle_area()
    {
        return length*breadth;
    }
};
class circle:public shape
{
    public:
    void getCircleData()
    {
        cout<<"Enter Radius : ";
        cin>>radius;
    }
    double circle_area()
    {
        return 3.14*(radius*radius);
    }
};
class square:public shape
{
    public:
    void getSquareData()
    {
        cout<<"Enter Side  : ";
        cin>>length;
    }
    double square_area()
    {
        return length*length;
    }
};
int main()
{
    rectangle r;
    circle c;
    square s;
    r.getrectangleData();
    cout<<"Area of Rectangle : "<<r.rectangle_area()<<endl;
    c.getCircleData();
    cout<<"Area of Circle    : "<<c.circle_area()<<endl;
    s.getSquareData();
    cout<<"Area of Square    : "<<s.square_area()<<endl;
    return 0;
}