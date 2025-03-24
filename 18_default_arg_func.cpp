//Default Agument Function
#include<iostream>
using namespace std;

void biodata(string name, int age=18, string city="Rasipuram")
{
    cout<<name<< " is from "<<city<< " and age is "<<age<<endl;
}
int main()
{
    biodata("Logesh",22,"Salem");
    biodata("Vicky",22);
    biodata("Kavin",19, "Namakkal");
    return 0;
}