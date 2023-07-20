//insertion sort is same as card shuffling 
//bestcase O(n)
//worst case O(n^2)
//use wehn array is small and elemnts are already sorted somewhat 
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,1,7,8,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
            }
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }

    return 0;
}