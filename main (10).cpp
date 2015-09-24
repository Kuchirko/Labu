                //Лабораторна робота №8. 
                //Виконав студент групи СІ-11 Віжбовський Віталій
#include <iostream>
#include <stdio.h>
#include <math.h>
const double a=3.18;
using namespace std;

double p(double k)
{
       return (tan(a*k)+sin(k));
       }
       
int main(){
    double f,x,y,z;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"z=";
    cin>>z;
    f=((sin(p(x)))/(sqrt(x+p(y))))+(pow(p(z),2)/(2*x))-(y*log10(x));
    cout<<"f="<<f<<endl;
    system ("pause");}
