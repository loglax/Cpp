// Preproccess Directive
#include <iostream>
using namespace std;
#define PI 3.14
#define rectangle(l, b) (l * b)
#define createString(s) #s
#define concat(a, b) a##b

int main()
{
    cout << "Area of PI : " << PI * 5 * 5 << endl;
    int l = 5, b = 10, area;
    area = rectangle(l, b);
    cout << "Area of Rectangle : " << area << endl;
    cout << "New String " << createString(Hello World) << endl;
    int ab = 100;
    cout << "The value of Ab : " << concat(a, b) << endl;
    cout << endl;
    cout << "DATE :" << __DATE__ << endl;
    cout << "TIME :" << __TIME__ << endl;
    cout << "FILE :" << __FILE__ << endl;
    cout << "LINE :" << __LINE__ << endl;
    cout << "C++VERSION :" << __cplusplus << endl;
    return 0;
}