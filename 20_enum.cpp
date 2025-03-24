#include <iostream>
using namespace std;

enum gender{Male, Female};
int main()
{
    gender g=Male;
    switch(g)
    {
        case Male:
        cout<<"Gender Male"<<endl;
        break;
        case Female:
        cout<<"Gender Female"<<endl;
        break;
        default:
        cout<< "Invalid Input"<<endl;
        break;
    }
    return 0;
}