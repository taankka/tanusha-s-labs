#include <iostream>
using namespace std;
int main()
{
    float x;
    cout<<"price: "; cin>>x;
    for (float i=0.1; i<=1.1; i+=0.1)
    {
		cout << i << "kg= " << i*x << endl;
	}
}