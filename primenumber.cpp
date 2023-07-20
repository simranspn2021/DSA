#include<iostream>
using namespace std;
int main()

{
    int n=8;
    int count=0;
    for(int i=1;i<=5;i++)
    {
        if(n%i==0)
           count++;


    }
    if(count==2)
    {
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;}