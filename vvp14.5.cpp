#include <iostream>
using namespace std;
int NOD (int a, int b)
{
    while (a != b)
    {
        if (a>b)
        a -= b;
        else
        b -= a;
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;       
     if (b == 0)
     cout << a << endl;
     else
     cout << NOD(a,b);
}