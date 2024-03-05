#include <iostream>
using namespace std;
int main()
{
	bool z=false;
	unsigned short int n,m,contor=0;
	cin>>n;
	char **a=new char*[n];
	for(int i=0;i<n;++i)
	a[i]=new char[n];
	for(int i=0;i<n;++i)
	for(int j=0;j<n;++j)
	cin>>a[i][j];
	cin>>m;
	char *b=new char[m];
	for(int i=0;i<m;++i)
	cin>>b[i];
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			for(int h=0;h<m;++h)
			{
				if(a[i][j+h]==b[h])
				contor++;
				else
				{
					contor=0;
					break;
				}
			}
			if(contor==m)
			{
				z=true;
				cout<<i<<" "<<j;
				break;
			}
		}
		if(z==true)
		break;	
	}
	if(z!=true)
	cout<<-1;
	return 0;	
}