#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c;
	float x;
	cin>>a>>b>>c;
	cout<<a*b*c<<" cm3"<<endl;
	cout<<2*(a*b+b*c+c*a)<<" cm2"<<endl;
	x=sqrt(a*a+b*b+c*c);
	x=x*100;
	a=int(x);
	
	
	cout<< a/100.0 <<" cm";
	return 0;
}