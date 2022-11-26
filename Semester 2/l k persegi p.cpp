#include<iostream>
using namespace std;

int main(){
	int p, l, L, K;
	cout<<"Masukkan Panjang : ";
	cin>>p;
	cout<<"Masukkan Lebar : ";
	cin>>l;
	
	L= p * l;
	K= (2 * p) + (2 * l);
	
	cout<<"Luas = "<< L;
	cout<<"\nKeliling = "<< K;
}