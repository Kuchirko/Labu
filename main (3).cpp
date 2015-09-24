#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std; 
int main ()
{
    double C=1.231, D=1.152;
    double x,y,A;
    cout<<"y=";
    cin>>y;
    cout<<"x=";
    cin>>x;
    if (x>y)
       A=tan(C)+x*exp(y);
    else
       A=log10(y)+D*x;
    cout<<"A="<<A<<endl<<endl;
    cout<<"x=";
    cin>>x;
    if (x>y)
       A=tan(C)+x*exp(y);
    else
       A=log10(y)+D*x;
    cout<<"A="<<A<<endl;
    system ("PAUSE");
    return 0;
    }
