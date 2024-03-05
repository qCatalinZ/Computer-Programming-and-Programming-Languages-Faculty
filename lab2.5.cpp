#include <iostream>
using namespace std;



int main()
{
	int contor=1,suma=0;
	char a;
	cin>>a;
	suma=suma+a;
	if(a=='?')
	cout<<"ata e";
	else
	{
		cout<<a;
		char spate;
		while(a!='?')
		{
			spate=a;
			cin>>a;
			suma=suma+a;
			contor++;
			if(a=='?')
			break;
			if(a==spate+1)
			{
				int media;
				char transformareINchar;
				media=suma/contor;
				transformareINchar=media;
				cout<<transformareINchar;
			}
			else
			{
				cout<<a;
			}
		}
	}
	return 0;
}