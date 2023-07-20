//we can use the 2 approach for reversing:
//1.Using stack to reverse
//2.using recursion to reverse 

// //Function to reverse the queue.
// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         // add code here.
//         stack<int>st;
//         while(!q.empty())
//         {
//             int x=q.front();
//             st.push(x);
//             q.pop();
//         }
//         while(!st.empty())
//         {
//             int x=st.top();
//             q.push(x);
//             st.pop();
//         }
//         return q;
//     }
// };

