#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char t[40]; int i, k;
    gets (t);
    k=0;
    for (i=0; i<strlen(t); i++)
        if (t[i]=='+' || t[i]== '-' || t[i]== '=' || t[i]== '*')
        {
                 k++;
        } 
    if  (k>0) cout<<"W teksti e "<<k<<" wkazani (-ych) symwoly"<<endl;
    else cout<<"W teksti widsutni wkazani symwoly"<<endl; 
    system("PAUSE");
    return EXIT_SUCCESS;
}
