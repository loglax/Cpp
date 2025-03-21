// Linear Search Find the elements in array
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, x;
    cout<<"Enter the Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value : ";
        cin>>a[i];
    }
    cout<<"Enter the Value to Search : ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Value found at index : "<<i;
            return 0;
        }
    }
    cout<<"Value not Found";
}