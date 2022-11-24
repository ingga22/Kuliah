#include <iostream>

using namespace std;
int main(void)
{
    char destination[25];
 char blank [10]={":"},blank2[10]={":"},ln[5]={" "},nama[50],hobbi[50],nm[10]={"Nama"},hb[10]={"Hobbi"};
    cout<<"Masukkan nama:";
    cin>>nama; 
    cout<<"Masukkan hobbi:";
    cin>>hobbi;
    cout<     strcpy(destination,nm);
     strcat(destination,nama);
    strcat(destination,ln);
    strcat(destination,hb);
    strcat(destination,blank2);
    strcat(destination,hobbi);
    cout<     //return 0;
      
}
