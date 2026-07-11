class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            //means left half is sorted 
            if(nums[start]<=nums[mid]){
                //check if element is in left half
                if(nums[start]<=target && target<nums[mid]){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
            //if right half is sorted
             if(nums[end]>=nums[mid]){
                //check if element is in right half
                if(nums[end]>=target && target>nums[mid]){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;

    }
};