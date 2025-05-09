//Program for checking the armstrong number between 100-999
/*
#include <iostream>
using namespace std;

int main()
{
    int sum=0, n,t,r;
    cout<<"Enter a 3 Digit Number : ";
    cin>>n;
    t = n;
    while(n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    if(sum == t)
    {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
    return 0;
}
*/
//Program for armstrong number finding between 100-999
#include <iostream>
using namespace std;

int main()
{
    int sum=0, n,t,r;
    for(int i =100;i<=999;i++)
    {
    n = i;
    while(n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    if(sum == i)
    {
        cout<<i<<endl;
    }
    sum =0;
}
    return 0;
}