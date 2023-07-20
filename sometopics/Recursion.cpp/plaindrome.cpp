#include<iostream>
using namespace std;
bool checkpalindrome(string s,int i,int j)
{
    if(s[i]!=s[j])
    {
        return false;
    }
    if(s[i]==s[j] || i>j)
    {
        return true;
    }
    i++;
    j--;
     return checkpalindrome(s,i,j);



}
int main()
{
    string s="appas";
    int n=s.length();
    int i=0;
    int j=n-1;
    cout<<checkpalindrome(s,i,j);
    return 0;
}