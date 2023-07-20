#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,5,7,1,3};
    //pivot element is minimum vala which is 1
    int low=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1;
     int mid=(low+high)/2;
    while(low<high)
    {
       
        if(arr[mid]>=arr[0])
        {
            low=mid+1;
        }
        else 
        {
            high=mid;
        }
        mid=low+(high-low)/2;

    }
    cout<<"pivot elemnt is "<<low;
    return 0;
}