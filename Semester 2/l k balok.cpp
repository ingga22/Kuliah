#include<iostream>
using namespace std;

int main(){
	int p, l, t, L, V;
	cout<<"Masukkan Panjang : ";
	cin>>p;
	cout<<"Masukkan Lebar : ";
	cin>>l;
	cout<<"Masukkan Tinggi : ";
	cin>>t;
	
	L= (2 * p * l) + (2 * p * t) + (2 * t * l);
	V= p * l * t;
	
	cout<<"Luas = "<< L;
	cout<<"\nVolume = "<< V;
}