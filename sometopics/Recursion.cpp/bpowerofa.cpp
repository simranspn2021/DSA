// #include<iostream>
// using namespace std;
// int powerof(int a ,int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//      return (3*powerof(a,b-1));
// }
// int main()
// {
//     int a=3;
//     int b=4;
//     cout<<powerof(a,b);
//     return 0;
// }
//2.we can do more optimization by the use of if even b or odd b 
#include<iostream>
using namespace std;
int powerof(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    int ans=powerof(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a=3;
    int b=2;
    cout<<powerof(a,b);
    return 0;
}