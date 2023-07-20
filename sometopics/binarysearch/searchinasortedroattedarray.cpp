//leetcode --sorted and roatted array 
// class Solution {
// public:
// int binarysearch(vector<int>&nums,int low,int high,int target)
// {
//     int mid=0;
//     while(low<=high)
//     {
//         int mid=low+(high-low)/2;
//         if(nums[mid]==target)
//         {
//             return mid;
//         }
//         else if(nums[mid]>target)
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
//     return -1;
// }
// int pivotindex(vector<int>&nums)
// {
//     int low=0;
//     int high=nums.size()-1;
//     int mid=low+(high-low)/2;
//     while(low<high)
//     {
//         if(nums[mid]>=nums[0])
//         {
//      low=mid+1;
//         }
//         else 
//         {
//             high=mid;
//         }
//         mid=low+(high-low)/2;
//     }
//     return low;
// }
//     int search(vector<int>& nums, int target) {
//         int pivot=pivotindex(nums);
//         if (target>=nums[pivot] && target<=nums[nums.size()-1])
//         {
//             return(binarysearch(nums,pivot,nums.size()-1,target));
//         }
//         else 
//         {
//             return(binarysearch(nums,0,pivot-1,target));
//         }
    
//     }
// };