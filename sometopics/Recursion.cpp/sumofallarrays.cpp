#include<iostream>
using namespace std;
int sumarray(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int sum=arr[0]+sumarray(arr+1,n-1);
    return sum;
}
int main()
{
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sumarray(arr,n);
    return 0;
}