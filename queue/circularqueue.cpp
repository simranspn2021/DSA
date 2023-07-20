// #include <bits/stdc++.h> 
// class CircularQueue{
//     int front;
//     int rear;
//     int *arr;
//     int size;
//     public:

//     CircularQueue(int n){
//            this->size=n;
//            arr=new int[n];
//            front=-1;
//            rear=-1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         if((front==0 and rear==size-1) || rear==(front-1)%(size-1))
//         {
//             return false;
//         }
//         else if(front==-1)
//         {
//             front=0;
//             rear=0;
//             arr[rear]=value;
//             return true;
//         }
//         else if (front!=0 and rear==size-1)
//         {
//             rear=0;
//             arr[rear]=value;
//             return true;
//         }
//         else
//         {
//             rear++;
//             arr[rear]=value;
//             return true;
//         }

//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue(){
//         // Write your code here.
//         int x;
//         if(front==-1 and rear==-1)
//         {
//             return -1;

//         }
//         else if(front==rear)
//         {
//             x=arr[front];
//             front=-1;
//             rear=-1;
//         }
//         else if( front==size-1)
//         {
//             x=arr[front];
//             front=0;
//         }
//         else
//         {
//             x=arr[front];
//             front++;

//         }
//         return x;
//     }
// };
//one is input restricted queue which means inout is allowed only at one side ,rear side but pop is allowed in both directions 
//we have functions of input restriected queue as push_back() that is only insertion is possible fromr rear end and then pop_back(),pop_front()
//other is output restructd queue where elemnt can be popped only from one direction 
//we have one more queue called double ended queue::
//we can use double ended queu in creation of both stacks and queues.
//here we have four operations:::
//1.push_front()   2.push_back()   3.pop_front()  4.pop_back()
//stl is present of double ended queue 
