//Program to sort an array in ascendinf order
#include <iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,temp;
    cout<<"\nEnter the Limit : ";
    cin>>n;

    cout<<"Enter "<<n<< " Value : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j]) // if(a[i]>a[j]) for descending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
}