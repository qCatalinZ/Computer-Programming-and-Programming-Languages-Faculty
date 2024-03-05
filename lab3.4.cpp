#include <iostream>
using namespace std;
int main()
{
	unsigned int n,p=33,unuS=(1<<31),unuD=1;          
	cin>>n;
	while(p=p-2)
	{
		if(((n&unuS)>>p)!=((n&unuD)))
		{
			cout<<"nu";
			break;
		}
		else
		{
			if(p==15)
			{
			cout<<"da";
			break; }
		}
		unuD=(unuD<<1);
		unuS=(unuS>>1);
	}
	
	
	return 0;
}