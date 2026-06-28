class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size();
        int minlen = INT_MAX;
        int j =0;
        int sum =0;
    
        for(int i=0;i<n;i++){
              sum += nums[i];
            while(sum>=target){
                    minlen = min( i-j+1,minlen);
                    sum =sum-nums[j];
                    j++;
                }
                }
            if(minlen == INT_MAX){
                    return 0;
                }
        return minlen;
    }
};