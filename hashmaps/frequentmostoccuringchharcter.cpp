// int maximumFrequency(vector<int> &arr, int n)
// {
//     //Write your code here
//     unordered_map<int,int>m;
//     int maxi=0;
//     int ans=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         m[arr[i]]++;
//         maxi=max(maxi,m[arr[i]]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(maxi==m[arr[i]])
//         {
//             ans=arr[i];
//             break;
//         }
//     }

//     return ans;
// }