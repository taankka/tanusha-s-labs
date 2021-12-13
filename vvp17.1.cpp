#include <iostream>
using namespace std;
int main(){
	int n, k, l;
	cout<<"n= "; cin >> n;
	cout<<"k= "; cin >> k;
    cout<<"l= "; cin >> l;
	int a[n];
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	float sum=0,b=0;
	for (int i=k; i<=l; i++){
		sum=sum+a[i];
		b++;
	}
	cout << sum/b;
	return 0;
}