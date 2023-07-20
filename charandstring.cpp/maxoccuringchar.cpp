//1 approach 
// #include<iostream>
// #include<map>
// using namespace std;
// string maxocc(string s)
// {
//     int n=s.length();
//     map<char,int>m;
//     for(int i=0;i<n;i++)
//     {
//          m[s[i]]++;
//     }
//     int max=0;
//     string st="";
//     for(auto it:m)
//     {
//         if(max<it.second)
//         {
//          max=it.second;
//          st=it.first;
//         }

//     }
//     return st;

// }
// int main()
// {
//     string t="tessst";
//     cout<<maxocc(t);
//     return 0;
// }
//2 approach 
#include<iostream>
using namespace std;
char countmax(string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        //lower case
        if(ch>='a'&& ch<='z')
        {
            number=ch-'a';

        }
        else{
            number=ch-'A';
        }
        arr[number]++;
        
    }
    int maxi=INT_MIN;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ ans;
    return finalans;

}
int main()
{
    string s="test";
    cout<<countmax(s);
    return 0;
    }