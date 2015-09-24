#include <cstdlib>
#include <iostream>
#include <math.h>

const float a=0.98, c=1.1;
const  int n=5, m=8;
using namespace std;

void fx (double b[n][m],double *x)
{
     int i,j; 
     for (i=0;i<n;i++)
     {
        x[i]=0;
        for (j=0;j<m;j++)
        x[i]+=(a*(b[i][j])+(c*b[i][j]));
     }
}

double ff(double b[n][m])
{double x[n],dob=1,f; 
int i;
       fx(b, x);
       for (i=1;i<n;i++)
       {
           dob*=x[i];           
       }
       f=a+dob;
       return f;
}
        
int main()
{
    //double b[n][m];
    int i,j;
    double b[n][m]={{2.6,3.7,2.1,2.7,3.6,2.9,1.2,2.0},
             {3.6,2.6,1.7,1.5,1.4,1.8,1.3,1.5},
             {1.4,4.3,3.8,1.4,1.5,1.5,0.5,1.4},
             {1.3,2.8,2.4,2.7,2.5,1.3,0.8,0.5},
             {2.3,2.5,1.4,3.2,3.8,2.6,1.1,0.8},};
    /*for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    cout<<"b["<<i<<","<<j<<"]=";
    cin>>b[i][j];
    }*/
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      cout<<b[i][j]<<"  ";
      cout<<endl;
    }
    cout<<"F="<<ff(b)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
