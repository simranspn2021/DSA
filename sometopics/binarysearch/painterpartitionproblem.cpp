//codestudio painter partition probem it is same as book allocation problem 
// bool ispossible(vector<int>&boards,int k,int mid)
// {
//     int paintercount=1;
//     int area=0;
//     for(int i=0;i<boards.size();i++)
//     {
//         if(area+boards[i]<=mid)
//         {
//             area=area+boards[i];
//         }
//         else{
          
//             paintercount++;
//             if (paintercount > k || boards[i] > mid) {
//               return false;
//             }
//             area = boards[i];
//         }
//     }
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int s=0;
//     int sum=0;
//     for (int i = 0; i < boards.size(); i++) {
//       sum = sum + boards[i];
//     }
//     int e = sum;
//     int mid = s + (e - s) / 2;
//     int ans = 0;
//     while (s <= e)
//     {
//         if(ispossible(boards,k,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }