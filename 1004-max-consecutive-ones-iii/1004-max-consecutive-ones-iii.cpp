class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int j = 0;
        int zero = 0;
        
        for(int i=0;i<n;i++){
        if(nums[i]==0){
            zero++;
        }
        while(zero>k){
            if(nums[j]==0){
                zero--;
            }
            j++;
        }    
        maxlen = max(maxlen,i-j+1);
        }

        return maxlen;
    }
};