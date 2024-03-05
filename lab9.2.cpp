#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char n[500];


    unsigned long long int suma=0;


    cin>>n;

    for(int i=0;n[i]!='\0';++i)
    {
        if(n[i]=='0')
            suma=suma+0;
        else if(n[i]=='1')
            suma=suma+1;
        else if(n[i]=='2')
            suma=suma+2;
        else if(n[i]=='3')
            suma=suma+3;
        else if(n[i]=='4')
            suma=suma+4;
        else if(n[i]=='5')
            suma=suma+5;
        else if(n[i]=='6')
            suma=suma+6;
        else if(n[i]=='7')
            suma=suma+7;
        else if(n[i]=='8')
            suma=suma+8;
        else if(n[i]=='9')
            suma=suma+9;
    }

    cout<<suma%3;

    return 0;
}