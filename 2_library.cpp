#include <iostream>
using namespace std;

int main()
{
    int days;
    cout<<"Enter the number of days you are late : ";
    cin>>days;
    if(days > 0 && days <=5)
    {
        cout <<"\nPer day Your Fine amount is : 0.50 Rupees";
        cout<<"\nTotal Fine amount is : "<<days * 0.50 << " Rupees";
    }
    else if(days >= 6 && days <= 10)
        {
            cout<<"\nPer day Your Fine amount is : 1.00 Rupees";
            cout<<"\nTotal Fine amount is : "<<days * 1.00<<" Rupees";
        }
    
    else if(days > 10 && days <= 30)
        {
            cout<<"\nPer day Your Fine amount is : 5 Rupees";
            cout<<"\nTotal Fine amount is : "<<days * 5<<" Rupees";
        }
        else
            {
                cout<<"\nYour Membership is Cancelled";
            }
}