#include <iostream>
using namespace std;
int main()
{
    char maritial, gender;
    int age;
    cout<<"Enter Maritial Status (M as Married | U as Unmarried) : ";
    cin>>maritial;
    if(maritial == 'M' || maritial == 'm')
    {
        cout<<"\nYou are Eligible for Insurance";
    }
    else if(maritial == 'U' || maritial == 'u')
    {
        cout<<"\nEnter Gender (M as Male | F as Female) : ";
        cin>>gender;
        if((gender == 'M' || gender == 'm') || gender == 'F' || gender == 'f')
        {
            cout<<"\nEnter Age : ";
            cin>>age;
            if(((gender == 'M' || gender == 'm') && age >= 30) || ((gender == 'F' || gender == 'f') && age >= 25))
            {
                cout<<"\nYou are Eligible for Insurance";
            }
            if(age < 30 || age < 25)
            {
                if((gender == 'M' || gender == 'm') || (gender == 'F' || gender == 'f'))
                {
                    cout<<"\nYou are Not Eligible for Insurance";
                    cout<<"\nAge is not Sufficient";
                }   
            } 
        }
        else{
            cout<<"\n Choose correct Gender";
            return 0;
        }

    }
    else{
        cout<< "\nInvalid Input";
        return 0;
        }
}