// #include<iostream>
// using namespace std;
// void reverse(string st,int n)
// {
//     if(n==0)
//     {
//         cout<<st[0];
//         return;
//     }
//     cout<<st[n];
//     reverse(st,n-1);
// }
// int main()
// {
//     string s="simran";
//     int n=s.length();
//     reverse(s,n);
//     return 0;
// }
//another approach -2
#include<iostream>
using namespace std;
void reverse(string &s,int i,int j)
{
    if(i>j)
    {
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main()
{
    string s="simran";
    int n=s.length();
    int i=0;
    int j=n-1;
    reverse(s,i,j);
    cout<<"after reversing"<<endl;
    cout<<s;
    return 0;
}