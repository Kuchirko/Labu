#include <cstdlib>
#include <iostream>

using namespace std;
const double pi=3.1416;
int main(int argc, char *argv[])
{
    double c,s,r;
    cout <<"Radius kola R=";
    cin >> r;
    c=2*pi*r;
    s=pi*r*r;
    cout <<"Ploshcha =" << s << endl;
    cout <<"dovzhina=" << c <<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
