#include<iostream>
using namespace std;
main()
{
    int harga;
    cout<<"\t\tBONUS PEMBELIAN \n";
    cout<<"=========================================\n";
    cout<<"\tNAMA\t: LINGGA SAFITRI\n";
    cout<<"\tNIM\t: 211011450395\n";
    cout<<"=========================================\n";
    cout<<"\n-Masukan Total Pembelian \t: Rp."; cin>>harga;
    switch(harga)
    {
        case 100000 ... 199999:
            int dis, t;
            dis=harga*0.05;
            t=harga-dis;
            cout<<"Anda Mendapat Potongan Sebesar \t: Rp."<<dis;
            cout<<"\nTotal Yang Harus Dibayar \t: Rp."<<t; break;
        case 200000 ... 299999:
            cout<<"BONUS ANDA : TIKET KE YOGYA"; break;
        case 300000 ... 399999:
            cout<<"BONUS ANDA : TIKET KE BALI"; break;
        case 400000 ... 499999:
            cout<<"BONUS ANDA : JAM TANGAN ROLEX"; break;
        case 500000 ... 1000000:
            cout<<"BONUS ANDA : TIKET KE SWISS"; break;
    }
}

