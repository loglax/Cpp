#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20};
    int b[] = {1,2,3,4,5};
    for(int x:a)
    {
        cout<<x<<endl;
    }
    cout<<"-------------"<<endl;
    for(int x:b)
    {
        cout<<x<<endl;
    }
    cout<<"Count : "<<sizeof(a)/sizeof(int);
    return 0;
}