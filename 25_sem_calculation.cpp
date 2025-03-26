#include <iostream>
using namespace std;

class stduent
{
    private:
    string name;
    int marks[6][6];
    int semTotal[6];
    float semPercentage[6];
    int overallTotalMarks = 0;
    float overallPercentage = 0.0;
    int totalSemester = 0;

    public:

    void getData()
    {
        cout<<"Enter Student name : ";
        cin>>name;

        char choice;
        for(int sem = 0; sem < 6; sem++)
        {
            cout<<"Do you have Semester "<<(sem + 1) << " marks ? (y/n) : ";
            cin>>choice;
            if(choice == 'n' || choice == 'N')
            {
                break;
            }
            int sum = 0;
            cout<<"Enter marks for 6 subjects in Semester "<< (sem + 1)<< " : ";
            for(int sub = 0; sub < 6; sub++)
            {
                cin>>marks[sem][sub];
                sum += marks[sem][sub];
            }
            semTotal[sem] = sum;
            semPercentage[sem] = (float)sum / 6.0;
            totalSemester++;
        }
        calculateOverall();
    }
    void calculateOverall()
    {
        overallTotalMarks = 0;
        for(int i = 0; i< totalSemester; i++)
        {
            overallTotalMarks += semTotal[i];
        }
        if(totalSemester > 0)
        {
            overallPercentage = (float)overallTotalMarks / (totalSemester * 6);
        }
        else{
            overallPercentage = 0.0;
        }
    }

    void display()
    {
        cout<<"--------------------------------------"<<endl;
        cout<<"Student Name : "<<name<<endl;
        cout<<"--------------------------------------"<<endl;

        for(int sem = 0; sem < totalSemester; sem++)
        {
            cout<<"Semester " << (sem + 1) << " Marks : \n";
            for(int sub = 0; sub <6; sub++)
            {
                cout<< "Subject "<<(sub +1)<< " : "<<marks[sem][sub] << endl;
            }
            cout<<"--------------------------------------"<<endl;
            cout<<"Semester "<<(sem + 1)<<" Total Marks : "<<semTotal[sem]<<endl;
            cout<<"Semester "<<(sem + 1)<<" Percentage  : "<<semPercentage[sem] << "%"<<endl;
            cout<<"--------------------------------------"<<endl;
        }
        cout<<"Overall Total Marks    : "<<overallTotalMarks<<endl;
        cout<<"Overall Percentage     : "<<overallPercentage<<endl;
        cout<<"--------------------------------------"<<endl;
    }
};

int main()
{
    stduent obj;
    obj.getData();
    obj.display();
    return 0;
}