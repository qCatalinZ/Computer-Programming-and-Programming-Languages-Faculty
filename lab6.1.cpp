#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	short int n;
	cin>>n;
	short int *v1=new short int [n],*v2=new short int [n];
	float suma=0;
	for(short int i=0;i<n;++i)
	{
		cin>>v1[i];
	}
	for(short int i=0;i<n;++i)
	{
		cin>>v2[i];
	}
	for(short int i=0;i<n;++i)
	{
		suma=suma+(v1[i]-v2[i])*(v1[i]-v2[i]);
	}
	cout << fixed << setprecision(2) << sqrt(suma);
	delete []v1;
	delete []v2;
	
	return 0;
}