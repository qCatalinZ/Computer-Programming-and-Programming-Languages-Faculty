#include <iostream>
using namespace std;

int main()

{
	unsigned int N;
	cin>>N;
	unsigned long int n,a,cmmdc;
	cin>>a;
	for(int i=0;i<N-1;i++)
	{
		cin>>n;
		for(int i=1 ; i<= min(a,n) ; i++)
		{
			if(a%i==0 && n%i==0)
			{
				cmmdc=i;
			}
		}
		a=cmmdc;
	}
	cout<<cmmdc;
	return 0;	
}