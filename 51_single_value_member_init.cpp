// Member Initializer List
// Single Value
#include <iostream>
using namespace std;

class Base
{
private:
  int x;

public:
  Base(int a) : x(a) {}

  void print()
  {
    cout << "X : " << x << endl;
  }
};

int main()
{
  Base o(25);
  o.print();
  return 0;
}
