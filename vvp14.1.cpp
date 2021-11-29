#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    for (int i=a; i<=b; i++){
		for (int j=1; j<=i; j++){
				cout << i << " ";
		}
    }
}