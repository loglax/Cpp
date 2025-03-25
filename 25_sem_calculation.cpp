//Semester Calculation
#include <iostream>
#include <vector>
using namespace std;

class Student
{
    private:
    string name;
    vector<vector<int>> marks;
    vector<int> semTotals;
    vector<float> semPercentages;
    int overallTotalMarks=0;
    float overallPercentage=0.0;
    int totalSubjects=0;

    public:
    void getData()
    {
        cout<<"Enter the Name of Student : ";
        cin>>name;
        int sem = 1;
        char choice;

        while(sem <= 6)
        {
            cout<<"Do you have Semester "<<sem<< " Marks ? (Y/N) : ";
            cin>>choice;
            if(choice == 'N' || choice == 'n')
            {
                break;
            }
            vector<int> semMarks(6);
            int semTotal = 0;
            cout<<"Enter Marks of 6 Subjects in Semester "<<sem<<" : ";
            for(int i=0;i<6;i++)
            {
                cin>>semMarks[i];
                semTotal += semMarks[i];
            }
            marks.push_back(semMarks);
            semTotals.push_back(semTotal);
            float semPercentage = (float)semTotal /6.0;
            semPercentages.push_back(semPercentage);

            sem++;
        }
        CalculateTotal();
    }

    void CalculateTotal()
    {
        overallTotalMarks = 0;
        //totalMarks = 0;
        totalSubjects = 0;
        for(int i=0;i<semTotals.size();i++)
        {
            overallTotalMarks += semTotals[i];
            totalSubjects += 6;
        }   
        if(totalSubjects > 0)
        {
            overallPercentage = (float)overallTotalMarks / totalSubjects;
        }
        else{
            overallPercentage = 0.0;
        }
    }

    void display()
    {
        cout<<"-------------------------"<<endl;
        cout<<"Student Name  : "<<name<<endl;
        cout<<"-------------------------"<<endl;

        int semNumber = 1;
        for(size_t i=0;i<marks.size();i++)
        {
            cout<<"Semester "<<semNumber << " Marks : \n";
            for(size_t j=0;j<marks[i].size();j++)
            {
                cout<<"Subject "<<j+1<<" : "<<marks[i][j]<<endl;
            }
            cout<<"---------------------------------------"<<endl;
            cout<<"Semester " << semNumber << " Total : "<<semTotals[i]<<endl;
            cout<<"Semester " << semNumber << " Pecentage : "<<semPercentages[i]<<endl;
            cout<<"---------------------------------------"<<endl;
            semNumber++;
            
        }
        cout<<"Overall Total Marks    : "<<overallTotalMarks<<endl;
        cout<<"Overall Percentage     : "<<overallPercentage<< "%"<<endl;
        cout<<"---------------------------------------"<<endl;
    }
};

int main()
{
    Student obj;
    obj.getData();
    obj.display();
    return 0;
}