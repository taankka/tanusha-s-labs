#include <iostream>
using namespace std;

int fact2(int n){
	if (n>1) return n * fact2(n-2);
    else return 1;
}

int main()
{
	int a;
	cout<<"a= "; cin >> a;
	cout << fact2(a);
	return 0;
}