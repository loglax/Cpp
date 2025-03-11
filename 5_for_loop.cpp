/*
#include <iostream>
using namespace std;
int main()
{
    int i=1, n;
    cout<<"\nEnter the Limit : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<i<<" ";
    }
    return 0;
}

*/

#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cout<<"\nEnter The Table : ";
    cin>>t;
    cout<<"\nEnter the Limit : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<"* "<<t<<" = "<<t*i<<endl;
    }
    return 0;
}