#include<iostream>
using namespace std;
bool sortedarray(int arr[],int n)
{
    if(n==0 || n==1)
    {
         return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
    bool ans=sortedarray(arr+1,n-1);
    return ans;
}
}
int main()
{
     
     int arr[]={2,4,6,8,9,10};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<sortedarray(arr,n); 
     return 0;
}