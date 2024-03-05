#include <iostream>
using namespace std;

int main()

{
	unsigned long int n;
	int a0=0,a1=1,a2=2,a3=3,a4=4,a5=5,a6=6,a7=7,a8=8,a9=9;
	cin>>n;
	cout<<n;
	
	
	
	while(n)
	{
		for(int i=0;i<=9;++i)
		{
			if((n%10)==i)	
			{
				n=n/10;
				if(i==0)
				a0=-1;
				if(i==1)
				a1=-1;
				if(i==2)
				a2=-1;
				if(i==3)
				a3=-1;
				if(i==4)
				a4=-1;
				if(i==5)
				a5=-1;
				if(i==6)
				a6=-1;
				if(i==7)
				a7=-1;
				if(i==8)
				a8=-1;
				if(i==9)
				a9=-1;				
			}
		}	
	}
	for(int i=0;i<=9;++i)
	{
		if(i==a0)
		cout<<i;
		if(i==a1)
		cout<<i;
		if(i==a2)
		cout<<i;
		if(i==a3)
		cout<<i;
		if(i==a4)
		cout<<i;
		if(i==a5)
		cout<<i;
		if(i==a6)
		cout<<i;
		if(i==a7)
		cout<<i;
		if(i==a8)
		cout<<i;
		if(i==a9)
		cout<<i;
	}
	
	
	
	
	
	return 0;
	
}