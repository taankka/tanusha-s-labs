#include <iostream>
using namespace std;
int main()
{
    int n; float a=1;
    cout<<"n= "; cin>>n;
    for (int i=1; i<=n; i++)
    {
		a=a*(1.0+i*0.1);
	}
    cout<<a;
}