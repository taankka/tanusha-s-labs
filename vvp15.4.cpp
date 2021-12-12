#include <iostream>
using namespace std;
float pi=3.14;
int quarter(float x, float y)
{
	if (x>0){
		if (y>0) return 1;
		else return 4;
	}
	if (x<0){
		if (y>0) return 2;
		else return 3;
	}
}
int main()
{
	int k=1;
	while (k<=3){
		float x,y;
        cout<<"x= "; cin>>x;
        cout<<"y= "; cin>>y;
		cout << quarter(x,y) << endl;
		k++;
	}
	return 0;
}