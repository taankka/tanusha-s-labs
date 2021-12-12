#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"n= "; cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		if (i==0) a[i]=1;
		else a[i]=a[i-1]+2;
	}
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}