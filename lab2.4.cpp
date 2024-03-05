#include <iostream>

using namespace std;

int median(int a, int b, int c)
{
	int afisare,Min,Max;
	Max=max(a,b);
	Max=max(Max,c);
	Min=min(a,b);
	Min=min(Min,c);
	if((a==Min && b==Max) || ( a==Max && b==Min ))
	{
		afisare=c;
	}
	else if( (a==Min && c==Max) || (a==Max && c==Min))
	{
		afisare=b;
	}
	else if((b==Max && c==Min) || (b==Min && c==Max))
	{
			afisare=a;
	}
	return afisare;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int afisare;
	if(a<0 || b<0 || c<0)
	cout<<"ata e";
	else
	{
		afisare=median(a,b,c);
		cout<<afisare<<" ";
		while(a>=0)
		{
			a=b;
			b=c;
			cin>>c;
			if(c<0)
			break;
			afisare=median(a,b,c);
			cout<<afisare<<" ";
		}
		
	}
	return 0;
}