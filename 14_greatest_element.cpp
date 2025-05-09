//Find the Greatest Number of element
#include <iostream>
using namespace std;

int main()
{
    int a[100],n,i,t;
    cout<<"Enter the Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value : ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(t<a[i])// if(t>a[i]) this is for find the smallest number
        {
            t=a[i];
        }
    }
    cout<<"The Greatest number is : "<<t;
    return 0;
}