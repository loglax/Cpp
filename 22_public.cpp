//Access Specifiers
#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};
int main()
{
    student o;
    cout<<"\nEnter Name & age : "<<endl;
    cin>>o.name;
    cin>>o.age;
    o.display();
    return 0;
}