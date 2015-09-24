#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL,".1251");
    int numlines = 0;
    ifstream in("C:\\1.txt");
    while ( ! in.eof() )
    {
       string line;
       getline (in, line);
       ++numlines;
    }
    numlines=numlines-1;

    in.close();
    char **s = new char* [numlines];
        int *c1=new int[numlines];
        int *c2=new int[numlines];
        int *c3=new int[numlines];
    ifstream inp("1.txt");
        for(int i = 0; i<numlines; i++)
        {
            s[i] = new char [30];
            inp >> s[i];
            inp >>c1[i];
            inp >>c2[i];
            inp >>c3[i];
        }
        inp.close();
         int mean_left=0;
          for(int i = 0; i<numlines; i++)
          {
              cout<<s[i]<<" "<<c1[i]<<" "<<c2[i]<<" "<<c3[i]<<"\n"<<endl;
              mean_left+=c3[i];
          }
          mean_left=mean_left/numlines;
          cout<<"Середнє арифметичне залишку: "<<mean_left<<endl;
          ofstream myfile;
          myfile.open ("out.txt");
          for(int i = 0; i<numlines; i++)
          {
              myfile << s[i];
              myfile << " ";
              myfile <<c1[i];
              myfile << " ";
              myfile <<c2[i];
              myfile << " ";
              myfile <<c3[i];
              myfile << "\n";
          }
          myfile <<"Середнє арифметичне залишку: "<<mean_left<<endl;
          myfile.close();
          system("pause");
          return 0;

}

