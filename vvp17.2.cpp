#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"n= "; cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int d=a[1]-a[0]; int c = 0;
	for (int i=1; i<n; i++){
		if (a[i]-a[i-1] == d) c = 1;
		else {
			c = 0;
			break;
		}
	}
	if (c == 0) cout << 0;
	else cout << d;
	return 0;
}