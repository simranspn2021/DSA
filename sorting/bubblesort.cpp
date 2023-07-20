//with every round the largest element will occupy its position 
//best case o(n)--already sorted
//worst case o(n^2)
//for optimization we can use variable swapped
//it is stable bcoz here we swap adjacent elemnts only---relative order btw equal elemnts are maintain 

#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,5,6,7,12,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool swapped=false;//for more optimization of code 
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

