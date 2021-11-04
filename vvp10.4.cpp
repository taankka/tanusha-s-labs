#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a= "; cin>>a;
    if ((a/100) > (a % 100 / 10) && (a % 100 / 10) > (a % 10) or (a / 100) < (a % 100 / 10) && (a % 100 / 10) < (a % 10))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}