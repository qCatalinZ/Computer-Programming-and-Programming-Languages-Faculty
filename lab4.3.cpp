#include <iostream>
using namespace std;

unsigned short int triunghi(unsigned short int n)
{
	unsigned short int spati=0,ni,numaratoare=1;
	ni=n;
	while(ni!=1)
	{
		spati=spati+1;
		ni--;
	}	
	ni=n;
	for (unsigned short int i=1;i<=n;i++)
	{
	for(unsigned short int j=1;j<=spati;j++)
	cout<<" ";
	for(unsigned short int z=1;z<=numaratoare;z++)
	{	
	cout<<"*";
	}
	numaratoare=numaratoare+2;
	cout<<endl;
	spati=spati-1;
	}
}
unsigned short int trunchi(unsigned short int spatiu,unsigned short int grosime)
{
	for(unsigned short int i=1;i<=spatiu;i++)
	{
		cout<<" ";
	}
	
	for( unsigned short int i=1;i<=grosime;i++)
	cout<<"*";
}

int main()
{
	unsigned short int n,tr=0,ni;
	int spatiu,grosime;
	cin>>n;
	ni=n;
	
	if((n&1)==0)
	{
		grosime=(n-1);
	}
	else
	{
		grosime=(n-2);
	}
	spatiu=n/2;
	if((n&1)==1)
	{
		spatiu++;
	}
	triunghi(n);
	triunghi(n);
	triunghi(n);
	
	while(tr<n)
	{
	trunchi(spatiu,grosime); 
	cout<<endl;
	tr++;
	}
	return 0;
}