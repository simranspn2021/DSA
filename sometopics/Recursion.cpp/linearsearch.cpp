#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int k)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }
    return linearsearch(arr+1,size-1,k);
    
}
int main()
{
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linearsearch(arr,n,9);
    return 0;
}