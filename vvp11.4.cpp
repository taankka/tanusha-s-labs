#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"x= "; cin>>x;
    cout<<"y= "; cin>>y;
    if (x>0 & y>0)
    {
        cout<<"1 quarter";
    }
    else if(x<0 & y>0)
    {
        cout<<"2 quarter";
    }
    else if(x<0 & y<0)
    {
        cout<<"3 quarter";
    }
    else if(x>0 & y<0)
    {
        cout<<"4 quarter";
    }
    else
    {
        cout<<0;
    }
    return 0;
}