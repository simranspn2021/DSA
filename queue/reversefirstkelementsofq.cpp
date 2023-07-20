// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;
// queue<int> modifyQueue(queue<int> q, int k);
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n, k;
//         cin >> n >> k;
//         queue<int> q;
//         while (n-- > 0) {
//             int a;
//             cin >> a;
//             q.push(a);
//         }
//         queue<int> ans = modifyQueue(q, k);
//         while (!ans.empty()) {
//             int a = ans.front();
//             ans.pop();
//             cout << a << " ";
//         }
//         cout << endl;
//     }
// }
// // } Driver Code Ends


// // User function Template for C++

// // Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
//     // add code here.
//     int i=0;
//     int n=q.size();
//     stack<int>st;
//     queue<int>nq;
//     while(i<k)
//     {
//         int x=q.front();
//         st.push(x);
//         q.pop();
//         i++;
//     }
//     while(!st.empty())
//     {
//         q.push(st.top());
//         st.pop();
//     }
//     int t=n-k;
//     while(t--)
//     {
//         int x=q.front();
//         q.push(x);
//         q.pop();
//     }
//     return q;
// }