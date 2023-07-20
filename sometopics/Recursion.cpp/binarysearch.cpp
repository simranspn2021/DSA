#include<iostream>
using namespace std;
bool binarysearch(int arr[],int n,int key,int low,int high)
{
    if(low>high)
    {
        return false;
    }
    int mid=low+(high+low)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    
    if(arr[mid]>key)
    {
    return binarysearch(arr,n,key,low,mid-1);
    }
    else{return binarysearch(arr,n,key,mid+1,high);
}
}
int main()
{
    int arr[]={2,3,4,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    cout<<binarysearch(arr,n,key,0,n-1);
    return 0;
}