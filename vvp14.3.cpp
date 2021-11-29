#include <iostream>
using namespace std;
int main()
{
    int n; int s=0; int k=1;
    cout<<"n= "; cin>>n;
    while (s<=n){
		s=s+k;
		k++;
	}
    cout<<s<<endl<<k-1;
}