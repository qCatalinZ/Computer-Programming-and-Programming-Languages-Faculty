#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    char expresie[1000],semn[1000];
    cin>>expresie;
    long long nr[1000]={0};
    int k=0,t=0;
    bool adevar=true;
    for(int i=0;expresie[i]!='\0';++i)
    {
        if(expresie[i]=='0')
            nr[k]=nr[k]*10+0;
        if(expresie[i]=='1')
            nr[k]=nr[k]*10+1;
        if(expresie[i]=='2')
            nr[k]=nr[k]*10+2;
        if(expresie[i]=='3')
            nr[k]=nr[k]*10+3;
        if(expresie[i]=='4')
            nr[k]=nr[k]*10+4;
        if(expresie[i]=='5')
            nr[k]=nr[k]*10+5;
        if(expresie[i]=='6')
            nr[k]=nr[k]*10+6;
        if(expresie[i]=='7')
            nr[k]=nr[k]*10+7;
        if(expresie[i]=='8')
            nr[k]=nr[k]*10+8;
        if(expresie[i]=='9')
            nr[k]=nr[k]*10+9;
        if(expresie[i]=='-' || expresie[i]=='+')
        {
            semn[t]=expresie[i];
            t++; //semn

            k++;
        }
    }
    long long int suma=nr[0];
    for(int i=0;i<k;++i)
    {
        if(semn[i]=='-')
        suma=suma-nr[i+1];
        else
        suma=suma+nr[i+1];
    }

    cout<<suma;


    return 0;
}