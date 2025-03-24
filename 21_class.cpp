/*
Basic Class Example
1.Area of circle
2.Circumference of a circle
*/
#include <iostream>
using namespace std;

class circle
{
    private:
    float radius;
    public:
    circle(float r)
    {
        radius = r;
    }
    float getArea()
    {
        return (3.14*(radius*radius));
    }
    float circumference()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    float r;
    cout<<"Enter the Value of Radius : ";
    cin>>r;
    circle c(r);
    cout<<"Area of circle is : "<<c.getArea()<<endl;
    cout<<"Circumference of circle is : "<<c.circumference()<<endl;
    return 0;
}