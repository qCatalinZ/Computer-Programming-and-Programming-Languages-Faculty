#include <iostream>
using namespace std;
int main()
{
	unsigned int n;
	int k,unu=1;
	cin>>n>>k;
	unu=(unu<<k);
	n=n^unu;
	cout<<n;
	return 0;
}