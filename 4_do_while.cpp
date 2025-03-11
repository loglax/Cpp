#include <iostream>
using namespace std;

int main()
{
    int i=1, n;
    cout<<"\nEnter the Limit : ";
    cin>>n;
    do
    {
        if(i%2 == 0)
        cout<<" "<<i;
        i++;
    }
    while(i <= n);
    return 0;
}