#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()

{
    double x1, x, step, y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter x1: ";
    cin>>x1;
    cout<<"enter step: ";
    cin>>step;
    while (x<x1)
    {
          y=sin(x)+ exp(2*x) - tan(x);
          cout<<x<<"\t"<<"y="<<y<<endl;
          x+=step;
    }
    system ("pause");
    return 0;
}
