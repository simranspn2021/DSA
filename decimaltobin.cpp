#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;

    }
    cout<<ans;
    return 0;
}
//if u want the same flow of data or number then use 
// ans=ans*10+digit
//for reverse ---ans=(digit*10^i)+ans
