#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    if (a>b & c>b)
    {
        a = a+c; cout<<a;
    }
    else if (a>c & b>c)
    {
        a = a+b; cout<<a;
    }
    else if (b>a & c>a)
    {
        b = b+c; cout<<b;
    }
    else
    {
        cout<<"wrong numbers";
    }
    return 0;
}
