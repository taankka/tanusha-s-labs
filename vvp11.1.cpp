#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    if (a==b)
    {
        a = 0; b = 0; cout<<a<<endl<<b;
    }
    else
    {
         if (a>b)
         {
             b = a;
             cout<<a<<endl<<b;
         }
        else
        {
            a = b;
            cout<<a<<endl<<b;
        }
    }
    return 0;
}