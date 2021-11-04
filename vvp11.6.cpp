#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a= "; cin>>a;
    if(a%2==0)
    {
        cout<<"chetnoe";
    }
    else
    {
        cout<<"nechetnoe";
    }
    if (a<1000 & a>99)
    {
        cout<<" trehznachnoe";
    }
    else if (a<100 & a>9)
    {
        cout<<" dvuhznachnoe";
    }
    else if(a<10)
    {
        cout<<" odnoznachnoe";
    }
    cout<<" chislo";
    return 0;
}