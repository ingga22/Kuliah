#include<iostream>
using namespace std;
 
int mult(int x, int y, int z);
int main() {    
 int x, y, z;    
 cout << "masukan bilangan pertama\t: ";cin>>x;    
 cout << "masukan bilangan kedua\t\t: ";cin>>y;    
 cout << "masukan bilangan ketiga\t\t: ";cin>>z;    
 cout<< "hasil perkalian bilangan itu adalah " << mult(x, y, z);    
 return 0;
}
int mult(int x, int y, int z) {    
 return x*y*z;
}
