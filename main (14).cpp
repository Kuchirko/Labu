#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    setlocale(LC_ALL,".1251");
    struct book
    {
        char title[100]; 
        int year; 
        int all;
        int given;
    } b1,*arrb;
    char c,f[10];
    int n=0;
    int i,j;
    int count;
    FILE * fstr; 
    if ((fstr=fopen("mybook.bin","wb"))==NULL)
    {
        cout<<"��������� �������� ����";
        return 1;
    }

        do {
        n++;
        cout<<"����� ����� "; gets(b1.title);
        cout<<"г� ������� "; scanf("%i",&b1.year);
        cout<<"ʳ������ ������ "; scanf("%i",&b1.all);
        cout<<"ʳ������ ������� ������ "; scanf("%i",&b1.given);
        fwrite(&b1,sizeof(b1),1,fstr); 
        cout<<"��� ���������� �������� n ";cin>>c;
        gets(f); 
        }    while(c!='n');
    fclose(fstr);
    cout<<"�������� � ���� "<<n<<" ������ "<<endl;
    //book arr;
                    ifstream file1("mybook.bin",ios::binary| ios::ate);
                    n=file1.tellg()/sizeof(arr);
                    file1.close();
                    arrb=new book[n];
                    ifstream file("mybook.bin",ios::binary);
                    if(!file)
                    {
                                    cout<<"File is not located"<<endl;
                    }
                    else for(i=0;i<n;i++)
                    {
                                    file.read((char*)&arr,sizeof(arr));
                                    arrb[i]=arr;
                    }
                    cout<<"���� ���������"<<endl;
                    int min_y=arrb[0].year;
                    int max_y=arrb[0].year;
                    for (i=0;i<n;i++){
                        if (min_y>arrb[i].year){min_y=arrb[i].year;}
                        if (max_y<arrb[i].year){max_y=arrb[i].year;}
                    }
                    for (i=min_y; i<=max_y;i++){
                        count=0;
                        for (j=0;j<n;j++){
                            if (arrb[j].year==i){ cout<<arrb[j].title<<endl; count+=arrb[j].all;}
                            }
                            if (count>0){cout<<"г� �������: "<<i<<" ʳ������:  "<<count<<endl;}
                    }
    system("pause");
    return 0;
}
