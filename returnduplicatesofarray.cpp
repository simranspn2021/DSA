//leetcode solution of finding the duplicate elemtn and store in vector 
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//        vector<int>vec;
//        for(int i=0;i<nums.size();i++)
//        {
//            int index=abs(nums[i])-1;
//            if(nums[index]<0)
//            {
//                vec.push_back(abs(nums[i]));
//            }
//            nums[index]=-nums[index];
//        }
//         return  vec;
//     }
// };