#include <iostream>


using namespace std;
int main()
{
	unsigned short int n;
	cin>>n;
	long int *v=new long int [n];
	long int k=0;
	for(long int i=0;i<n;++i)
	{
		cin>>v[i];
	}
	for(long int i=0;i<n;++i)
	{
		while(v[i]==v[i+1]-1)
		{
		i+=2;
		k+=2;
		}
		if(v[i]==v[i-1]+1)
		{
		i++;
		k++;
		}
		if(i<n)
		cout<<v[i]<<" ";
	}
	if(k==n)
	cout<<-1;
	delete []v;
	return 0;
}