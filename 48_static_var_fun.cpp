#include <iostream>
using namespace std;

class Student
{
    private:
    static int x;
    string name;
    int age;
    public:
    Student(string n, int a) // Parameterized Constructor
    {
        x++;
        name = n;
        age = a;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
        cout<<'\n';
    }
    static int getCount()
    {
        return x;
    }
};
int Student::x=0;
int main()
{
    Student s1("Logesh", 22);
    Student s2("Gowtham", 23);
    Student s3("Siva", 24);
    s1.print();
    s2.print();
    s3.print();
    cout<<"Total Students : "<<Student::getCount()<<endl;
    return 0;
}