#include <iostream>
using namespace std;

int main()
{
	unsigned short int n,m,unu=1,zero=0  ,prefix,sufix,   sufixM,sufixN   ,prefixN, prefixM,shiftMptN,shiftNptM;
	cin>>n>>m;
	

	
	prefix=1;
	prefix=(prefix<<15);
	
	sufix=1;
	sufix=(sufix<<14);
	
	prefix=prefix+sufix;
	
	sufix=1;
	sufix=(sufix<<13);
	
	prefix=prefix+sufix;
	
	sufix=1;
	sufix=(sufix<<12);
	
	prefix=prefix+sufix;
	sufix=15;

	
	prefixN=n&prefix;
	
	sufixM=m&sufix;
	
	n=n^prefixN;
	
	shiftMptN=sufixM&unu;
	shiftMptN=(shiftMptN<<12);
	n=n+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixM&unu;
	shiftMptN=(shiftMptN<<12);
	n=n+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixM&unu;
	shiftMptN=(shiftMptN<<12);
	n=n+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixM&unu;
	shiftMptN=(shiftMptN<<12);
	n=n+shiftMptN;
	cout<<n<<" ";

	unu=1;
	prefixM=m&prefix;
	m=m^prefixM;
	
	sufixN=n&sufix;
	
	shiftMptN=sufixN&unu;
	shiftMptN=(shiftMptN<<12);
	m=m+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixN&unu;
	shiftMptN=(shiftMptN<<12);
	m=m+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixN&unu;
	shiftMptN=(shiftMptN<<12);
	m=m+shiftMptN;
	
	unu=(unu<<1);
	shiftMptN=sufixN&unu;
	shiftMptN=(shiftMptN<<12);
	m=m+shiftMptN;
		

	cout<<m;
	
	return 0;
	
}