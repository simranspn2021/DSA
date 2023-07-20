//in complete binary tree leaf nodes are from (n/2)+1 to n th index as they are alreay a heap no need to check for leaf nodes thats whhy we will see from n/2 nodes 
#include<iostream>
using namespace std;
//heapify takes O(logn) time
void heapify(int *arr,int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<n and arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n and arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main()
{
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    //this below code takes O(n) time
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    //printing the hea formed
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
        return 0;
}
