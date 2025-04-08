//Member Initializer List
// Multiple Values
#include <iostream>
using namespace std;

class Base
{
private:
  int x, y, z;
  public:
  Base(int a, int b, int c) : x(a), y(b), z(c) {}

  void print()
  {
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Z : " << z << endl;
  }
};

int main()
{
    Base o(25,35,55);
    o.print();
    return 0;
}