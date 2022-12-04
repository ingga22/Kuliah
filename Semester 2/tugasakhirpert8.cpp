#include<iostream>
#include<conio.h>
#include<iomanip>

#pragma GCC Optimize("O3")

using namespace std;
main()
{
cout<<endl;
cout<<"  Nama          : LINGGA SAFITRI "<<endl;
cout<<"  Kelas         : 02TPLP003 Reguler A "<<endl;
cout<<"  Mata Kuliah   : Algoritma & Pemrograman 2 "<<endl<<endl;

int a[3][3],b[3][3],c[3][3],i,j,k;

// Matriks 3x3
cout<<"Matriks A"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<"Masukkan nilai matriks A baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
        cin>>a[i][j];
        cout<<endl;
    }
}
cout<<endl;
cout<<"Matriks B"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<"Masukkan nilai matriks B baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
        cin>>b[i][j];
        cout<<endl;
    }

// Menampilkan Matriks A dan B yang telah diinput 3x3
}
cout<<endl;
cout<<"Matriks A"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<setw(4)<<a[i][j];
    }
    cout<<endl;
}

cout<<endl;
cout<<"Matriks B"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<setw(4)<<b[i][j];
    }
    cout<<endl;
}

cout<<endl;
cout<<"Matriks C"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=0;
        for(k=0;k<3;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        cout<<setw(4)<<c[i][j];
    }
    cout<<endl;
}
getch();
}
