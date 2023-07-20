#include<iostream>
using namespace std;
int main()
{
    string st="oppos";
    int n=st.length();
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(st[s]!=st[e])
        {
            cout<<"not palindrome";
            break;
        }
        e--;
        s++;
    }
    return 0;
}