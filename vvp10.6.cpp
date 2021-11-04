#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    if ((a * a == b * b + c * c) or (b * b == a * a + c * c) or (c * c == a * a + b * b))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}