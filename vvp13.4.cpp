#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a; int n;
    cout<<"a= "; cin>>a;
    cout<<"n= "; cin>>n;
    float p=1;
	for (int i=1; i<=n; i++){
		p=p+pow(a,i);
	}
	cout << endl << p;
}