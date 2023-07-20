//here we do not try to make smaller inouts but it automaticaaly akes the input smaller by choices 
//the branch of the tree is equal to the choices you have to make 
//some of thhe examples is permuttaion,substring,subsets,etc
//trees are based on recursion.
//backtracking,dp,divide and conquer all are based on recursion
//recursion tabh use hota hai jab bde function kkisi chote fucntion pr depend krta hai 
//exact same chote function se answer nikal skta hai toh vo recursion hai 
//for recursion you have to return wich is mnadatory and base case is imp beacuse stack overflow ho jaayega segmentation fault aajayega and recursive relation bhi mandaoty hai and the third component is processing vala part 
//for recuursion 
//funnc(){
//    base case 
//processing (recursive ke baad bhi aaksta hai )
// recursive realtion}
//jiske mai recursive relation processing ke baad aata hai use ham khte hai tail recursion aur jiska phele aata use head recursion 

// Examples:1.print numbers from 1 to n 
// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==1)
//     {
//         cout<<n;
//         return;
//     }
//      print(n-1);
//     cout<<n;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }
//Example 2:2^n find kro using recursion 
// #include<iostream>
// using namespace std;
// int poweroftwo(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     int num=poweroftwo(n-1);
//     return 2*num;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<poweroftwo(n);
//     return 0;
// }
//example 3.print numbers from n to 1
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)
    {
        cout<<n;
        return;
    }
    cout<<n;
    print(n-1);
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;

}