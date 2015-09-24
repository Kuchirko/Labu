#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main ()
{
    int m,n,i,j;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    double c[m][n], x[m];
    for (i=0; i<m; i++)
    {   
        for (j=0; j<n; j++)
        {
            cout<<"c["<<i<<"]["<<j<<"]=";
            cin>>c[i][j];} }
            for (i=0; i<m; i++)
            x[i]=0;
  //  for (i=0; i<m; i++)
        {for  (j=0; j<n; j++)
        for (i=0; i<m; i++)
        if (c[i][j]>0) 
        x[i]+=c[i][j];}
        for (i=0; i<m; i++)
        cout<<"x["<<i<<"]="<<x[i]<<endl;
        system ("pause");
        return 0;       
}
