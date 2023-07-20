//selection sort::we will take the smallest elemnt and placeat right place 
//space complexity is constant.O(1)
//time complexity :worst case :O(n^2)
//best case means when it is already sorted which is also O(n^2)
//use case: when size of array or vector is small then we can choose selection sort 
//selection sort is not a stable algo because it swaps non adjacent elemnts 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,7,9,2,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
    cout<<"after selection sort the array is "<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}