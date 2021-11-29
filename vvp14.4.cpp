#include <iostream>
using namespace std;
int main()
{
    float p; float v=1000; int k=0;
    cout<<"p= "; cin>>p;
    while (v<1100){
		k++;
		v = v + v*p/100;
	}
    cout<<k<<endl<<v;
}