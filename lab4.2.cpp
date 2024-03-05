#include <iostream>
using namespace std;

int main()
{
	int n,spati=0,ni,sir=1,numaratoare=1;
	cin>>n;
	ni=n;
	while(ni!=1)
	{
		spati=spati+2;
		ni--;
	}	
	ni=n;
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=spati;j++)
	cout<<" ";
	for(int z=1;z<=numaratoare;z++)
	{
		if(sir<10)
		{
			if(z!=numaratoare)
			cout<<sir<<" ";
			else
			cout<<sir;
		}
		if(sir==10)
		{
			sir=1;
			if(z!=numaratoare)
			cout<<sir<<" ";
			else
			cout<<sir;
		}
		sir++;
	}
	sir=1;
	numaratoare=numaratoare+2;
	cout<<endl;
	
	
	spati=spati-2;
	
	
	}
	
	return 0;
}