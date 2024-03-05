#include <iostream>
using namespace std;

int main()
{
	int n,afisare=-1;
	while(cin>>n)
	{
		int c=0;
		if(n<0)
		break;
		for( int i=1;i<=n;i++)
		{
			if(n%i==0)
			c++;
		}
		if(c==2)
		{
			afisare=max(afisare,n);
		}
		
		
		

		
	}
	if(afisare>=0)
	cout<<afisare;
	else
	cout<<"nu exista";
	return 0;
}