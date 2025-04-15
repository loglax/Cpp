//Inline function
#include <iostream>
using namespace std;

inline int cube(int x)
{
    int result  = x*x*x;
    return result;
}
int main()
{
    int x = 2;
    cout<<"The cube of "<<x<<" is : "<<cube(x)<<endl;
    return 0;
}