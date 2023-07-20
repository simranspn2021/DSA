#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int element)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]>element)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;

        }
    }
}
int main()
{
    int arr[]={2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element;
    cin>>element;
    int i=binarysearch(arr,n,element);
    cout<<"elemnt is present at "<<i<<endl;
    return 0;
}