#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1|| n==0)
    { 
        return 1;
    }
    int factorial=n*fact(n-1);
    return factorial;
}
int main()
{
    int n=5;
    cout<<fact(n);
    return 0;
}