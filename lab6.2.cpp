#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	unsigned short int n;
	cin>>n;
	long int *v=new long int[n],contor=0;
	for(long int i=0;i<n;++i)
	{
		cin>>v[i];
	}
	for(long int i=1;i<n;++i)
	{
		if((v[i-1]<0 && v[i]>=0) || (v[i-1]>=0 && v[i]<0))
		contor++;
	}
	double a=contor,b=n;
	a=a/b;
	a=a*100;
	v[0]=int(a);
	cout<< v[0]/100.0f;
delete []v;
	return 0;
}