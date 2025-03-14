//Program to find the factors of given number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    return 0;
}