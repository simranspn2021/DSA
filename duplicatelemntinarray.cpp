// #include<unordered_map>
// int findDuplicate(vector<int> &arr) 
// {
//     // Write your code here
//     unordered_map<int,int>mai;
//     for(auto x:arr)
//     {
//         mai[x]++;
//     }
//     for(auto p:mai)
//     {
//         if(p.second==2)
//         {
//             return p.first;
//         }
//     }
	
// }
//2 aproach---better approach 
// #include<unordered_map>
// int findDuplicate(vector<int> &arr) 
// {
//     int ans=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         ans=ans^arr[i];
//     }
//     for(int i=0;i<arr.size();i++)
//     {
//         ans=ans^i;
//     }
//     return ans;
	
// }
