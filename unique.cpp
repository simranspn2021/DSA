#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,2,3,4,4,5,6,5};
    int ans=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    cout<<"unique number "<<ans;
}