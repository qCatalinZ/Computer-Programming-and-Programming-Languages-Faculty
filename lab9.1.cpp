#include <iostream>

using namespace std;

int main()
{
    unsigned int a,z=0,d=0,c=0;
    bool t=false,adv=false;
    unsigned int b[99999];


    while(1)
    {
        cin>>a;
        if(a==0)
            break;
        else
        {
            b[z]=a;
            z++;
        }
    }
    for(unsigned int i=1;i<z-1;++i)
    {

        if(t==false)
        {
            if(b[i-1]<b[i] && b[i]>b[i+1])
            {
                cout<<i;
                t=true;
            }
        }
        else
        if(t==true)
        {
            if(b[i-1]<b[i] && b[i]>b[i+1])
            {
                cout<<" "<<i;

            }
        }
    }
    t=false;adv=false;d=0;c=0;
    for(unsigned int i=1;i<z;++i)
    {
        if(t==true)
        {
            c++;
            if(b[i-1]<b[i] && b[i]>b[i+1])
            {
                if(d<c)
                    d=c;
                c=0;
            }
        }
        if(b[i-1]<b[i] && b[i]>b[i+1])
            t=true;

    }

    cout<<endl<<d;
    return 0;
}