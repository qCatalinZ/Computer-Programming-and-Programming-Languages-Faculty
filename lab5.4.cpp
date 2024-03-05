#include <iostream>

using namespace std;
int main()
{
	unsigned long long int n,k,contor=1;
	cin>>n>>k;
	const unsigned long long int k1=k;

	if(n==k)
	{
	cout<<1;
	}
	else if(n%k==0)
	{
	cout<<n/k;
	}
	else if(n%2==1 && k%2==0)
	{
	cout<<-1;
	}
	else
	{
		
		while(n!=k)
		{
			k=k+k1;	
			contor++;
			if(k>n)
			{
			k=k-n;
			}
			if(contor>2*n)
			break;
		}
		
		cout<<contor;
	}

	
	return 0;
}