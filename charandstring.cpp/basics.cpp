//cin will terminate when it encounter space,tab and enter 
//hence it will not take the innput after space.
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch[7]="simran";
//     int i=0;
//     int len=0;
//     while(ch[i]!= '\0')   {
//         len++;
//         i++;
//     }
//     cout<<"length is "<<len;
//     return 0;
// }
//we know cin will terminate for space and we have to take space input as well as 
//we will use getline (cin,s)
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     string s="";
//     cout<<"enter the string ";
//     getline(cin,s);
// cout<<s;
// char s1[]="simran";
// char s2[]="simrasn";
// if(strcmp(s1,s2)==0)
// {
//     cout<<"they are equal ";

// }
// else{
//     cout<<"they are not equal ";
// }
//     return 0;
// }
//for comparison of strings we will use strcmp(s1,s2) if it is equal to 0 then is equla otherwise theyr are different 
//but here it is imp to have the character array instead of string 
//we can find substring in string using find function for example:
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s ="Simran";
    string str="ran";
    cout<<s.find(str);
    for(int i=s.find(str);i<s.length();i++)
    {
   cout<<s[i];
    }
    //for erasing we can use s.erase(begin ,end)
    
    
    return 0;
}