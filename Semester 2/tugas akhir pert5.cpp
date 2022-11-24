#include<iostream>
using namespace std;
main()
{
    int a=0, b=1, c, n=12, i;
    cout<<"Fibonacci : "<<a<<" "<<b<<" ";
    for(i=0;i<=n-3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}
