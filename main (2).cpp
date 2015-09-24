#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double a,b,x,y;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"x=";
    cin>>x;
    y=log10(tan(a*x))+(pow((b*pow(x,2.0)),1.0/7.0))/(asin(x))-(exp(a+x));
    cout<<"y= \a\a\a\a\a\a\a\a"<<y<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
