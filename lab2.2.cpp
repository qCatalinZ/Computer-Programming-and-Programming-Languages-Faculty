#include <iostream>
using namespace std;
int main()
{
	int N,a,b,suma;
	int contor=0;
	cin>>N; suma=N-1;
	cin>>a;
	b=0;
	contor++;
	suma=a+b;
	if(suma>N)
	cout<<contor;
	else{
	
	while(suma<N)
	{
		cin>>b;
		suma=a+b;
		contor++;
		a=b;
	}}
	cout<<contor;
	return 0;
}