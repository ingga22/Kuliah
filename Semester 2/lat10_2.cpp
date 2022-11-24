#include<iostream> 
using namespace std;
int main()
{
int *ptr, num; ptr = & num;
*ptr = 100;
cout<< num <<" "; (*ptr)++;
cout<<num <<" "; (*ptr)*7;
cout <<num<<"\n"; return 0;
}

