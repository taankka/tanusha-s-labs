#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    while (a-b>=0){
        a=a-b;
    }
    cout<<"a= "<<a;
}