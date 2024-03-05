#include <iostream>
using namespace std;
int main()
{
	int n,sumaP=0,sumaS=0,sumaT=0;
	cin>>n;	
	int **a=new int*[n];
	for(int i=0;i<n;++i)
		a[i]=new int[n];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
		{
			cin>>a[i][j];			
			sumaT+=a[i][j];
			if(i==j)
			sumaP+=a[i][j];
			if((i+j)==n-1)
			sumaS+=a[i][j];
		}
	for(int i=0;i<n;++i)
	delete[] a[i];
	delete[] a;
	cout<<sumaP<<" "<<sumaS<<" "<<sumaT;
	return 0;	
}