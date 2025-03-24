#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
float sum(float a, float b)
{
    return a+b;
}

int main()
{
    cout << "Total : "<<sum(10,20)<<endl;
    cout << "Total : "<<sum(10,20,20)<<endl;
    cout << "Total : "<<sum(10.20f,20.25f)<<endl;
    return 0;
}