#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main ()
{
    int A,B,X;
    cout<<"A=";
    cin>>A;
    cout<<"B=";
    cin>>B;
    switch (A)
    {
           case 0:
                switch (B)
                {
                  case 0: cout<<"X=0"<<endl; break;
                  case 1: cout<<"X=1"<<endl; break;
                  } break;
           case 1:
                switch (B)
                {
                  case 0: cout<<"X=1"<<endl; break;
                  case 1: cout<<"X=0"<<endl; break; 
                  } 
           }
    system ("PAUSE");
    return 0;                       
    }


