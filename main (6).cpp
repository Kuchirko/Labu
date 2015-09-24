#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
    double m[20], s;
    int i;
    s=0;
    for (i=0; i<20; i++)
    {cout<<"m["<<i<<"]=";
    cin>>m[i];}
    for (i=0; i<20; i+=2)
    s+=m[i];
    cout<<"s="<<s<<endl;
    system ("PAUSE");
    return 0;
}
