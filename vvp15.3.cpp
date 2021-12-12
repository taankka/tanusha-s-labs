#include <iostream>
using namespace std;
float p=3.14;
int SignS(float r1, float r2){
	return p*r1*r1-p*r2*r2;
}
int main()
{
	float r1, r2; int b=1;
    while (b<=3)
    {
        cout<<"r1= "; cin>>r1;
        cout<<"r2= "; cin>>r2;
        cout<<SignS(r1, r2)<<endl;
        b++;
    }
	return 0;
}