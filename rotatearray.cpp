// class Solution {
//leetcode
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int>temp(nums.size());
//         int n=nums.size();
//         for (int i=0;i<nums.size();i++)
//         {
//             temp[(i+k)%n]=nums[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             nums[i]=temp[i];
//         }
//     }
// };