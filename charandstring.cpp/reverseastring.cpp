#include<iostream>
using namespace std;
int main()
{
    string s="Simran";
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
     int k=0;
     while(s[k]!='\0')
     {
        cout<<s[k]<<endl;
        k++;
     }
    return 0;
}