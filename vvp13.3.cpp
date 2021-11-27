#include <iostream>
using namespace std;
int main()
{
    int n;
	cout<<"n= "; cin >> n;
	float p=0;
	for (int i=1; i<=n; i++)
    {
		p=p+(2*i-1);
	}
    cout << "n2= " << p << endl;
}