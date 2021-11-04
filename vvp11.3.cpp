#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    if (abs(a-b)< abs(a-c))
    {
        cout<<"b "<<abs(a-b);
    }
    else
    {
        cout<<"c "<<abs(a-c);
    }
    return 0;
}