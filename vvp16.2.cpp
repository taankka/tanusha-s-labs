#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"n= "; cin >> n;
	int a,d;
	cout<<"a= "; cin>>a;
    cout<<"d= "; cin>>d;
	int c[n];
	for (int i=0; i<n; i++){
		if (i==0) c[i]=a;
		else if (i==1) c[i]=a*d;
		else c[i]=c[i-1]*d;
	}
	for (int i=0; i<n; i++){
		cout << c[i] << " ";
	}
	return 0;
}