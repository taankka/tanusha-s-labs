#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"n= "; cin >> n;
	int c[n];
	cout<<"a= "; cin>>c[0];
    cout<<"b= "; cin>>c[1];
	for (int i=2; i<n; i++){
		c[i]=0;
			for (int j=0; j<i; j++){
				c[i]+=c[j];
			}
		}
	for (int i=0; i<n; i++){
		cout << c[i] << " ";
	}
	return 0;
}