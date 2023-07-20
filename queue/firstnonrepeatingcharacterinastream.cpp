// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    unordered_map<char,int>count;
// 		    queue<int>q;
// 		    string str="";
// 		     for(int i=0;i<A.length();i++)
// 		     {
// 		         count[A[i]]++;
// 		         q.push(A[i]);
// 		         while(!q.empty()){
// 		          if(count[q.front()]>1)
// 		         {
// 		             q.pop();
// 		         }
// 		         else 
// 		         {
// 		             str.push_back(q.front());
// 		             break;
// 		         }
// 		     }
// 		     if(q.empty())
// 		     {
// 		         str.push_back('#');
// 		     }
// 		     }
// 		 return str;
// 		}

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		string A;
// 		cin >> A;
// 		Solution obj;
// 		string ans = obj.FirstNonRepeating(A);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends