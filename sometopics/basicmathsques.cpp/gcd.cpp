//gcd can be calculated using euclid algorithm which stats that gcd(a,b)=gcd(a-b,b)
// we can use the recursion method or we can also used the iteration method which is as follows
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
      return b;
    if(b==0)
      return a;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }  
    return a;
}
int main()
{
    int a=24;
    int b=72;
    cout<<gcd(a,b);
    return 0;
}