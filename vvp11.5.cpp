#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a= "; cin>>a;
    if (a==0)
    {
        cout<<"nulevoe";
    }
    else
    {
        if(a>0)
        {
            cout<<"polozhitelnoe ";
        }
        else
        {
            cout<<"otritsatelnoe ";
        }
        if(a%2==0)
        {
            cout<<"chetnoe";
        }
        else
        {
            cout<<"nechetnoe";
        }
    }
    cout<<" chislo";
    return 0;
}