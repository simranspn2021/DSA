//heap is a complete binary tree with heap order properties.
//complete binary tree:every level is completely filled except the last level.
//nodes are always added to the left
//we have two types of heap:max heap and min heap
//1.Max heap is the heap whcih has the maxium elemnt at the root and below that all elements are smaller than root
//2.Min heap is the heap which has the minimum elemnt at the root and below that all the leemnts are larger
//some basics for heap:
//for node i we should kknow that::
//1.left child:2*i index;
//2.right child:(2*i)+1 index;
//3.parent:(i/2) index
//max heap (time complexity to insert is O(logn ) due to comaprison by parent only )
//deletion is always take place from root (when we have to delete the root we will first swap the root elemnt to the last node then dlete thhe last node and take the root element ot it proper position )
#include<iostream>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
   void insert(int data)
   {
    size=size+1;
    int index=size;
    arr[index]=data;

    while(index>1)
    {
        int parent=index/2;
        if(arr[index]>arr[parent])
        {
            swap(arr[index],arr[parent]);
            index=parent;
        }
        else{
            return;
        }
    }

   } 
   void print()

   {
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<endl;
    }
   }
   void deletefromheap()
   {
    if(size==0)
    {
        cout<<"nothing to delete";
        return;
    }
    arr[1]=arr[size];
    size--;
    //tke root to its correct posiiton
    int i=1;
    while(i<size)
    {
        int leftchild=2*i;
        int rightchild=(2*i)+1;
        if(leftchild<size and arr[i]<arr[leftchild])
        {
            swap(arr[i],arr[leftchild]);
            i=leftchild;
        }
        else if(rightchild<size and arr[i]<arr[rightchild])
        {
            swap(arr[i],arr[rightchild]);
             i=rightchild;
        }
        else{
            return;
        }

    }
   }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(23);
    h.insert(56);
    h.print();
    h.deletefromheap();//time complexity is O(logn)
    h.print();
        return 0;
}