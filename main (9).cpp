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
    double a[m][n], max;
    for (i=0; i<m; i++)  
        for (j=0; j<n; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];} 
    max=a[0][0];
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        {
            if (a[i][j]>max)
            max=a[i][j];}
    cout<<"max="<<max<<endl;
    system ("pause");
    return 0;
}

