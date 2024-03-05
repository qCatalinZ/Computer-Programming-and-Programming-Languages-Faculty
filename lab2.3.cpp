#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	int suma;
	suma=a;
	int contor=1;
	if(a=='!')
	{
		cout<<a;
	}
	else
	{
		while(a!='!')
		{
			cin>>a;
			if(a=='!')
			{
				break;
			}
			contor++;
			suma=suma+a;
		}
		int c;
		c=suma/contor;
		a=c;
		cout<<a;
	}
	return 0;
}