//Program to find the sum of N numbers 3=> 1+2+3=>6
#include <iostream>
using namespace std;

int main()
{
    int n,i,total=0;
    cout<<"Enter the Limit : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        total = total + i;
    }
    cout<<"Sum of N numbers : "<<total<<endl;
    return 0;
}