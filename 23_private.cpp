//Private Specifiers
#include <iostream>
using namespace std;

class student
{
    private: //Private we can access only in the class
    string name;
    int age;

    public:
    void getData()
    {
        cout<<"Enter Name & Age : "<<endl;
        cin>>name;
        cin>>age;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};
int main()
{
    student o;
    o.getData();
    o.display();
    return 0;
}