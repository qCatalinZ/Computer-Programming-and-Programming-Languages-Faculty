#include <iostream>
using namespace std;


char* cautare(char* a,char* b)
{
	int i[100]={0},k=0;
	int l1=0,l2=0;
	for(int j=0;a[j]!='\0';++j)
	l1++;
	for(int j=0;b[j]!='\0';++j)
	l2++;
	for(int j=0;j<l1-l2+1;++j)
	{
		bool adevar=true;
		for(int z=0;z<l2;++z)
		{
			if(a[j+z]!=b[z])
			{
				adevar=false;
				break;
			}
		}
		if(adevar==true)
		{
			i[k]=j;
			k++;	
		}		
	}
	if(k!=0){
	cout<<k<<endl;
	cout<<i[0];
	for(int j=1;j<k;++j)
	cout<<" "<<i[j];
}
	else cout<<0;	
}


int main()
{
	char sir1[1000],sir2[100];
	cin>>sir1;
	cin>>sir2;
	cautare(sir1,sir2);
	return 0;
}