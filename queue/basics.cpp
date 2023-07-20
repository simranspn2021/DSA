// #include <bits/stdc++.h> 
// class Queue {
//     int *arr;
//     int size;
    
//     int qfront;
//     int rear;
// public:
//     Queue() {
// size=10001;
// arr=new int[size];
// qfront=0;
// rear=0;

//             }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(qfront==rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(int data) {
//         if(rear==size)
//         {
//             cout<<"Overflow";
//         }
//        arr[rear]=data;
//        rear++;
//     }

//     int dequeue() {
//         // Implement the dequeue() function
//         if (qfront== rear)
//         {
//           return -1;
//         }
//         int element=arr[qfront];
//         qfront++;
//         if(qfront==rear)
//         {
//             qfront=0;
//             rear=0;
//         }
//         return element;
//     }

//     int front() {
//         if(qfront == rear)
//         {
//             return -1;
//         }
        
//         return arr[qfront];
//     }
// };