#include <iostream>
#include <math.h>
using namespace std;
float b;
int PowerA3(float a, float b)
{
    b=pow(a,3);
	return b;
}
int main()
{
    float a[5]; int c=1;
	while (c<=5){
		cin >> a[c];
		cout << PowerA3(a[c],b) << " ";
		c++;
		cout << endl;
	}
	return 0;
}