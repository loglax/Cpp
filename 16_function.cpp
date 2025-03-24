#include<iostream>
using namespace std;
//  Return Type   Function Name  (Parameters)
void display()
{
    int a,b,c;
    cout<<"\nEnter 2 Nos : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Total : "<<c;
}
int main()
{
   display();
   display();
    return 0;
}