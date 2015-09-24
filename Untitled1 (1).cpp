#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main (int argc, char *argv[])
{
    double a, s=0;
    cout<<"a=";
    cin>>a;
    int i;
    for (i=1; i<=12; i++)
    s+=pow(1.0/i,2)+pow(a,i);
    cout<<"s="<<s<<endl;
    system ("PAUSE");
    return 0;
}
