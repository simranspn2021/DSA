#include<iostream>
using namespace std;
int main()
{
    int arr1[]={2,3,4,6};
    int arr2[]={5,7,9};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[m+n]={0};
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n)
    {
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<(m+n);i++)
    {
        cout<<arr3[i]<<endl;
    }
    return 0;
}