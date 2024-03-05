#include <iostream>
using namespace std;

int StangaDreapta(unsigned short int &a, unsigned short int &b)
{
	a=(a<<1);
	b=(b>>1);
	return a,b;
}
int Shift(unsigned short int shiftStanga, unsigned short int shiftDreapta,unsigned short int &n,unsigned short int unuStanga, unsigned short int unuDreapta)
{
	if((shiftStanga!=0 && shiftDreapta!=0) || (shiftStanga==0 && shiftDreapta==0))
	{
		
	}
	else
	{
		if( shiftStanga!=0 )
		n=n^unuStanga;
		else
		n=n+unuStanga;
		if( shiftDreapta!=0 )
		n=n^unuDreapta;
		else
		n=n+unuDreapta;	
	}	
}

int numereInterschimbate(unsigned short int &s,unsigned short int &d,unsigned short int n,unsigned short int us,unsigned short int ud)
{
	s=n&us;
	d=n&ud;
}

int main()
{
	unsigned short int n,unuDreapta=1,unuStanga=(1<<15),shiftStanga,shiftDreapta;
	cin>>n;
	
	numereInterschimbate(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	Shift(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	StangaDreapta(unuDreapta,unuStanga);
	
	numereInterschimbate(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	Shift(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	StangaDreapta(unuDreapta,unuStanga);
	
	numereInterschimbate(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	Shift(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	StangaDreapta(unuDreapta,unuStanga);
	
	numereInterschimbate(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);
	Shift(shiftStanga,shiftDreapta,n,unuStanga,unuDreapta);

	
	cout<<n;
	
	
	
	return 0;
}