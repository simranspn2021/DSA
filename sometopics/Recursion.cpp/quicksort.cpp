//partition krte hai quick sort mai isme ek pivot element ko uthakar uski shi position 
//pr rkhte hai then left mai chote and right mai bde 
//time compelixty:O(nlogn)
//worst case:o(n^2)
//space complexity:O(n)
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int p=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<p)
        {
            cnt++;
        }
    }
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivotindex and j>pivotindex)
    {
        while(arr[i]<=p)
        {
            i++;
        }
        while(arr[j]>p)
        {
            j--;
        }
        if(i<pivotindex and j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[]={2,5,1,9,12,44,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    cout<<"after sorting";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}