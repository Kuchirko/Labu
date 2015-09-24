#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main ()
{
    double a[20], b, min;
    int i,k;
    cout<<"b=";
    cin>>b;
    k=0;
    for (i=0; i<20; i++)
    {cout<<"a["<<i<<"]=";
    cin>>a[i];}
    min=a[0];
    if (a[0]>b) 
        {for (i=1; i<20; i++)
        if (min>a[i])
        min=a[i];
        cout<<"min="<<min<<endl;} else
        {for (i=0; i<20; i++)
        if (a[i]==0) 
        k+=1;
        cout<<"k="<<k<<endl;}
    system("PAUSE");
    return 0;
}
