#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"elemnts";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // int target;
    // cout<<"enter the elemnt to be find";
    // cin>>target;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         if(arr[i][j]==target)
    //         {
    //             cout<<"elemnt found";
    //             break;
    //         }
          
    //     }
    // }
    //row wise sum 
    // for(int i=0;i<3;i++){
    // int rowsum=0;
    // for(int j=0;j<4;j++)
    // {
    //     rowsum=rowsum+arr[i][j];

    // }
    // cout<<"sum of "<<i<<"row "<<rowsum;
    // }
    //for maximum sum we will use 
    int maxi=-1;
    for(int i=0;i<3;i++){
    int rowsum=0;
    for(int j=0;j<4;j++)
    {
        rowsum=rowsum+arr[i][j];
       
    }
     if(maxi<rowsum)
        {
            maxi=rowsum;
        }
   
    }
    cout<<maxi;
    return 0;
} 
//when we pass the 2 d array in a function we need to write about the column size it is imp 
