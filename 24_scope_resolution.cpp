//Scope Resolution Operator
#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    int m1,m2,m3,m4,m5,m6,total;
    float per;

    public:
    void getData()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Marks of 6 Subjects : ";
        cin>>m1>>m2>>m3>>m4>>m5>>m6;
    }
    void display();  //scope resolution operator
};

void student::display()
{
    total = m1+m2+m3+m4+m5+m6;
    per = total/6.0;
    cout<<"-------------------------"<<endl;
    cout<<"Name         : "<<name<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Subject 1    : "<<m1<<endl;
    cout<<"Subject 2    : "<<m2<<endl;
    cout<<"Subject 3    : "<<m3<<endl;
    cout<<"Subject 4    : "<<m4<<endl;
    cout<<"Subject 5    : "<<m5<<endl;
    cout<<"Subject 6    : "<<m6<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Total        : "<<total<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Percentage   : "<<per<<endl;
    cout<<"-------------------------"<<endl;
}

int main()
{
    student obj;
    obj.getData();
    obj.display();
    return 0;
}