#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a= "; cin>>a;
    if (a%10==a/1000 & a%100/10 == a%1000/100)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}