#include <iostream>
using namespace std;

void Rational2Zecimal(int &nr, int &num)
{
    cout<<nr/num<<endl;
    int k=0,zeci=nr%num;
    while(zeci)
    {
        zeci*=10;
        if(zeci)
        {
        	k++;
        	if(k>100)
        	break;
        	cout<<zeci/num;
		}
		if(k>100)
		break;
		zeci=zeci-(zeci/num)*num;
    }
}

int main()
{
	int nr,num;
	cin>>nr>>num;
	Rational2Zecimal(nr,num);
	return 0;
}