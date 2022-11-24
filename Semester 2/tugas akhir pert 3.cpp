#include<iostream>
using namespace std;
main()
{
int kode;
cout<<"Masukan Kode Hari : "; cin>>kode;
if(kode==1)
    cout<<"Kode : "<<kode<<"\tSenin";
else if(kode==2)
    cout<<"Kode : "<<kode<<"\tSelasa";
else if(kode==3)
    cout<<"Kode : "<<kode<<"\tRabu";
else if(kode==4)
    cout<<"Kode : "<<kode<<"\tKamis";
else if(kode==5)
    cout<<"Kode : "<<kode<<"\tJumat";
else if(kode==6)
    cout<<"Kode : "<<kode<<"\tSabtu";
else if(kode==7)
    cout<<"Kode : "<<kode<<"\tMinggu";
else if(kode>7 || kode==0)
    cout<<"Pilihan Tidak Ada";
}
