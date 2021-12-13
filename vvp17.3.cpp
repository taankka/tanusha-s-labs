#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"n= "; cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int min=10000;
	for (int i=0; i<n; i++){
		if (a[i]<min && (i+1)%2==0) min = a[i];
	}
	cout << min;
	return 0;
}