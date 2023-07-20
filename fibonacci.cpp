#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a=0;
    int b=1;
    int c=0;
    cout<<a<<endl<<b<<endl;
    while(n>0)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        n--;
    }
    return 0;
}