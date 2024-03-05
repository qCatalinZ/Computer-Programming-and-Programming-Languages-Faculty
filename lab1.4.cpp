#include <iostream>
using namespace std;

int TipuriDeDate(int a, float b, float c, double d, long long e)
{
	b=b/c;
	if(b==d)
	{

		a=b*e;
	}
	else
	{

		a=c*e;
	}
	cout<<a;
	return a;
}
int main()
{
	int a;
	float b,c;
	double d;
	long e;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	TipuriDeDate(a,b,c,d,e);
	return 0;
}