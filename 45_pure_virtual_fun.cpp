#include <iostream>
using namespace std;

class Bike
{
    public:
    /*virtual void start()
    {
        cout<<"Bike Started"<<endl;
    }
    */
   virtual void start() = 0; // Pure virtual function

};
class pulsar:public Bike
{
    public:
    void start()
    {
        cout<<"Pulsar Started"<<endl;
    }
};
int main()
{
    Bike *p = new pulsar();
    p->start(); // Base class pointer can access derived class function
}