#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"n= "; cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int b1=0,b2=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[i]==a[j] && i!=j){
				b1=i+1;
				b2=j+1;
				break;
			}
		}
	}
	if (b1>b2) cout << b2 << " " << b1;
	else cout << b1 << " " << b2;
	return 0;
}