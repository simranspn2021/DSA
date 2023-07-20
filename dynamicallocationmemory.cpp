// #include<iostream>
// using namespace std;

// //dynamic mai ek stack mai memory allocate hoti aur ke heap mai 
// //for example int * p=new int ;yha par int * p stack mai hui hai and new vale mai heap mai toh toal memeory dono ka sum hoga size =8(pointer)+intger(4)=12
// int main()
// {
//     //int *n=new int ;//for dynamic allocation of integer and here in heap it will return thr address so we willl use pointer for storing of values 
// int n;
// cin>>n;
// int * arr=new int[n];
// for(int i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<endl;
// }
//     return 0;
    //memory differnce btw the dynamic and static memory location is there beacuse of pointer space 
    //sttaic memory allcoation mai memory apne aap saaf hojaata hai vo variable apne aap khtm hojaata hai but in case of dnamic memory alocation memory relaesse nhi hoti hame delete keyword se krna pdta hai 
    //for dleteion use :delete i ; delete [] arr;

#include<iostream>
using namespace std;
int main()
{
    //cretion of 2 d array using dma
    int n;
    cin>>n; 
    int ** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
    }
    //dleeting the wole 2 d array now 
    for(int i=0;i<n;i++)
    {
        delete[]arr[i];
    }
   
    
        delete[]arr;
    
    return 0;
}