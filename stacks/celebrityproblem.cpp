//this problem brute force approach is to check for the row if all the lements are zero and for the columns all are 1 axcept diagonal 
//      0   1    2
//  0   1   1    0
//  1   0   1    0
//  2   0   1    1
//here 1 knows do not knows 0 and 2 which is the condition for celebrity and 0 and 2 knows 1 whic is aldoo a condiiton hence 1 is a celebrity 
//here is another approach which doesnot reuqires O(n2) it is more optimized
//algorithm::
//1.put all the elments in the stack 
//2.jabtak stack ka size!=1 hai tbh tak 2 elemnts pop krte jaao and then check kro vo do elemnts (let sy a and b) if a knows b then a is not a celebrity and if b knows thn b is not a celbrity 
//3.let say koi ek celbrity nikla to use push krdo 
//4.last mai ek elemnt bacega stack mai use rkhlo and that person is a potential celebrity 
//5.now we will check by using conditions like all the rows are zero and columns of that celebrity is 1 excpet digaonal 
//{ Driver Code Starts
//Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution 
// {
//     private:
//     bool knows(vector<vector<int>>& M,int a ,int b)
//     {
//         if(M[a][b]==1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         // code here
//         stack<int>s;
//         for(int i=0;i<n;i++)
//         {
//             s.push(i);
//         }
//         while(s.size()>1)
//         {
//             int a=s.top();
//             s.pop();
//             int b=s.top();
//             s.pop();
//               if(knows(M,a,b))
//         {
//           s.push(b);
//         }
//         else
//         {
//             s.push(a);
//         }
//         }
      
//         //if single elemnt is left then verify it 
//         int candidate=s.top();
//         bool rowcheck=false;
//         int zerocount=0;
//         for(int i=0;i<n;i++)
//         {
//             if(M[candidate][i]==0)
//             {
//                 zerocount++;
//             }
//         }
//         if(zerocount==n)
//         {
//             rowcheck=true;
            
//         }
//         bool colcheck=false;
//  int onecount=0;
//         for(int i=0;i<n;i++)
//         {
//             if(M[i][candidate]==1)
//             {
//                 onecount++;
//             }
//         }
//         if(onecount==n-1)
//         {
//             colcheck=true;
            
//         }
//         if(colcheck==true and rowcheck==true)
//         {
//             return candidate;
            
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }
//         Solution ob;
//         cout<<ob.celebrity(M,n)<<endl;

//     }
// }

// // } Driver Code Ends