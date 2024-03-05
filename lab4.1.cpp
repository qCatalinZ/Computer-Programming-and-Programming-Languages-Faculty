#include <iostream>
using namespace std;

int main()
{
	unsigned int n,contor=0;
	cin>>n;
	cout<<n<<" ";
	while(n!=1)
	{
		if((n&1)==1)
	{
			n=n*3+1;
			contor++;
			cout<<n<<" ";}
		else
		{
		n=n/2;
		contor++;
		if(n==1)
		break;
		cout<<n<<" ";
		}
	}
	cout<<endl<<contor;
	return 0;
}