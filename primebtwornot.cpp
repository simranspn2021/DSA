#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number ";
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        cout<<"prime number ";
    }
    return 0;
}