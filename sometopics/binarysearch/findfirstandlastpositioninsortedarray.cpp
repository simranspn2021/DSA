//leetcode first and last position of elemnt in array
//we can find the total number of occurance of any number using :
//last-first+1
// class Solution {
// public:
//    int firstocc(vector<int>&nums,int target)
//    {
//        int low=0;
//        int high=nums.size()-1;
//        int ans=-1;
//        while(low<=high)
//        {
//            int mid=low+(high-low)/2;
//            if(nums[mid]==target)
//            {
//                ans=mid;
//                high=mid-1;
//            }
//            else if(nums[mid]>target)
//            {
//                high=mid-1;
//            }
//            else
//            {
//                low=mid+1;
//            }

//        }
//        return ans;

//    }
//    int lastocc(vector<int>&nums,int target)
//    {
//         {
//        int low=0;
//        int high=nums.size()-1;
//        int ans=-1;
//        while(low<=high)
//        {
//            int mid=low+(high-low)/2;
//            if(nums[mid]==target)
//            {
//                ans=mid;
//                low=mid+1;
//            }
//            else if(nums[mid]>target)
//            {
//                high=mid-1;
//            }
//            else
//            {
//                low=mid+1;
//            }

//        }
//        return ans;

//    }

//    }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>ans;
//         int first=firstocc(nums,target);
//         int last=lastocc(nums,target);
//         ans.push_back(first);
//         ans.push_back(last);
//         return ans;
//     }
// };