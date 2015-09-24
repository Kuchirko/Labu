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
        cout<<"Неможливо створити файл";
        return 1;
    }

        do {
        n++;
        cout<<"назва книги "; gets(b1.title);
        cout<<"Рік видання "; scanf("%i",&b1.year);
        cout<<"Кількість книжок "; scanf("%i",&b1.all);
        cout<<"Кількість виданих книжок "; scanf("%i",&b1.given);
        fwrite(&b1,sizeof(b1),1,fstr); 
        cout<<"Для завершення натисніть n ";cin>>c;
        gets(f); 
        }    while(c!='n');
    fclose(fstr);
    cout<<"Записано у файл "<<n<<" книжок "<<endl;
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
                    cout<<"Файл прочитано"<<endl;
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
                            if (count>0){cout<<"Рік видання: "<<i<<" Кількість:  "<<count<<endl;}
                    }
    system("pause");
    return 0;
}
