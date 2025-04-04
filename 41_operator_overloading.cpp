#include <iostream>
using namespace std;

class Complex
{
    private:
    int real, img;
    public:
    Complex(){real = 0; img = 0;}
    Complex(int r, int i) {real = r; img = i;}

    void print()
    {
        cout<<real<< " + " <<img<< "i"<<endl;
    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    Complex c1(2,5);
    Complex c2(3,2);
    Complex c3;
    c3 = c1 + c2; // operator overloading
    c3.print();
    return 0;
}