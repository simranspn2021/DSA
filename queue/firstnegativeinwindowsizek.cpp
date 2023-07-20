//we can use i and  j here for window can use the i=0 and j=i and run j for size upto k annd when number is negative print it otherwise move i ++ and j=i again but here we will check for the elemnt more tan two time which is 
//unnesccary step hence we will use sliding window.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
                                                 
//         int i=0;
//         int j=0;
//         deque<long long>q;
//         vector<long long>vect;
//         while(j<N)
//         {
//             if(A[j]<0)
//             {
//                 q.push_back(A[j]);
//             }
//             if(j-i+1<K)
//             {
//                 j++;
//             }
//             else if(j-i+1==K)
//             {
//                 if(q.size()==0)
//                 {
//                     vect.push_back(0);
//                 }
//                 else
//                 {
//                     vect.push_back(q.front());
//                     if(A[i]<0)
//                     {
//                         q.pop_front();
//                     }
//                 }
//                  i++;
//             j++;
//             }
           
//         }
//         return vect;
                                                 
//  }