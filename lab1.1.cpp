#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int m;
	m=max(a,b);
	m=max(m,c);
	cout<<m;
	return 0;
}