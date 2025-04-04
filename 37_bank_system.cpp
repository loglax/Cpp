#include<iostream>
using namespace std;
//Bank Management System using Class & inheritance in C++
/*
    1.Saving Account
    2.current Account
 
    Account Creation
    Deposit
    Withdraw
    Balance
 
*/
class account
{
    private:
    string name;
    int accno;
    string atype;

    public:
    void getAccountDetails()
    {
        cout<<"\nEnter Customer Name  : ";
        cin>>name;
        cout<<"\nEnter Account Number : ";
        cin>>accno;
        cout<<"\nEnter Account type   : ";
        cin>>atype;
    }
    void diplayDetails()
    {
        cout<<"-------------------------------"<<endl;
        cout<<"\nCustomer Name  : "<<name<<endl;
        cout<<"\nAccount Number : "<<accno<<endl;
        cout<<"\nAccount Type   : "<<atype<<endl;
    }
};
class current_account:public account
{
    private:
    float balance;
    public:
    void c_display()
    {
        cout<<"\nBalance        :"<<balance<<endl;
        cout<<"-------------------------------"<<endl;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit : ";
        cin>>deposit;
        balance = balance + deposit;
        cout<<"\nAmount Credited "<<balance<<" Rs";
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to Withdraw : ";
        cin>>withdraw;
        if(withdraw > 1000)
        {
            balance = balance - withdraw;
            cout<<"\nBalance Amount After Withdraw : "<<balance;
        }
        else
        {
            cout<<"\nInsufficient Balance"<<endl;
        }
    }
};
class saving_account:public account
{
    private:
    float sav_balance;
    public:
    void s_display()
    {
        cout<<"\nBalance : "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit, interest;
        cout<<"\nEnter Amount to Deposit : ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest = (sav_balance*2)/100;
        sav_balance = sav_balance + interest;
        cout<<"\nAmount Credited "<<deposit<<" Rs";
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance : "<<sav_balance;
        cout<<"\nEnter amount to withdraw : ";\
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance = sav_balance - withdraw;
            cout<<"\nBalance Amount After Withdraw : "<<sav_balance;
        }
        else{
            cout<<"\nInsufficient Balance";
        }
    }
};

int main()
{
    current_account c1;
    saving_account s1;
    char type;
    cout<<"Enter S for Saving account C for Current account : ";
    cin>>type;
    int choice;
    if(type == 'S' || type == 's')
    {
        s1.getAccountDetails();
        while(1)          //while(1) for infinite loop
        {
            cout<<"\n\n-------------------------------"<<endl;
            cout<<"Choose your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Diplay Account Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"Enter your Choice : ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                s1.s_deposit();
                break;
                case 2:
                s1.s_withdraw();
                break;
                case 3:
                s1.s_display();
                break;
                case 4:
                s1.diplayDetails();
                s1.s_display();
                break;
                case 5:
                goto end;
                default:
                cout<<"\n\nEnter choice is invalid"<<endl;
            }
        }
    }
    else if(type == 'C' || type == 'c')
    {
        c1.getAccountDetails();
        while(1)          //while(1) for infinite loop
        {
            cout<<"\n\nChoose your Choice"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Diplay Account Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"Enter your Choice : ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                c1.c_deposit();
                break;
                case 2:
                c1.c_withdraw();
                break;
                case 3:
                c1.c_display();
                break;
                case 4:
                c1.diplayDetails();
                c1.c_display();
                break;
                case 5:
                goto end;
                default:
                cout<<"\n\nEnter choice is invalid"<<endl;
            }
        }
    }
    else{
        cout<<"\nInvalid Account Selection";
    }
    end:
    cout<<"\nThanks for banking with US...";
    return 0;
}