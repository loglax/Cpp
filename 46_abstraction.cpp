//Abstraction
#include <iostream>
using namespace std;

class Bank
{
    public:
    virtual void credit_debit() = 0; // Pure virtual function
    virtual void loan() = 0;
};

class ICICI:public Bank
{
    public:
    void credit_debit()
    {
        cout<<"ICICI Bank Credit/Debit"<<endl;
    }
    void loan()
    {
        cout<<"ICICI Bank Loan 8%"<<endl;
    }
};
class HDFC:public Bank
{
    public:
    void credit_debit()
    {
        cout<<"HDFC Bank Credit/Debit"<<endl;
    }
    void loan()
    {
        cout<<"HDFC Bank Loan 12%"<<endl;
    }
};

int main()
{
    Bank *b;
    ICICI i;
    HDFC h;
    b = &i;
    b->credit_debit();
    b->loan();
    cout<<endl;
    b = &h;
    b->credit_debit();
    b->loan();
    return 0;
}