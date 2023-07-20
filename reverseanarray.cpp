#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={3,2,4,5,67,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}