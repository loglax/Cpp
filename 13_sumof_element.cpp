#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, sum=0;
    cout<<"Enter the Limit : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value : ";
        cin>>a[i];
        sum += a[i];
    }
    cout<<"Sum of the Elements : "<<sum;
    return 0;
}