#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int contor=0;
	char a,b='?';
	cin>>a;
	if(a==b)
	{
		contor++;
	}
	else
	{
		while(a!=b)
		{
			cin>>a;
			contor++;
			if(a==b)
			break;
		}
	}
	cout<<contor;
	return 0;
}