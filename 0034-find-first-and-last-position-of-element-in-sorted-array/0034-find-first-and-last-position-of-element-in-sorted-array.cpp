class Solution {
public:

    int firstOccurence(vector<int>& nums, int target){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans1 = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans1 = mid;
                end = mid-1;
            }else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans1;
    }

    int secondOccurence(vector<int>& nums, int target){
        int n = nums.size();
        int start = 0;
        int end = n-1;
         int ans2 = -1;
          while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                ans2 = mid;
                start = mid+1;
            }else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans2;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
    int first=  firstOccurence( nums, target);
    int second= secondOccurence( nums, target);
        return {first,second};
        
    }
};
   
    
   
