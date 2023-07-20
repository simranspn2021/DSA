#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,5,6,78,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=1;
    while(i<n-1)
    {
        swap(arr[i],arr[j]);
        i=i+2;
        j=j+2;
    }
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}