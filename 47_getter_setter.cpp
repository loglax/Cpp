//Getter and Setter
#include <iostream>
using namespace std;
class Student
{
    private:
    string name; int age;
    public:
    Student(string n, int a) // Parameterized Constructor
    {
        name = n;
        age = a;
    }
    string getName()
    {
        return this->name; // Getter
    }
    void setName(string n) // Setter
    {
        this->name = n;
    }
    int getAge()
    {
        return this->age; // Getter
    }
    void setAge(int a) // Setter
    {
        this->age = a;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};
int main()
{
    Student s("Logesh", 22);
    s.display();
    s.setName("Gowtham");
    s.setAge(23);
    cout<<"Name : "<<s.getName()<<endl;
    cout<<"Age  : "<<s.getAge()<<endl;
    return 0;
}