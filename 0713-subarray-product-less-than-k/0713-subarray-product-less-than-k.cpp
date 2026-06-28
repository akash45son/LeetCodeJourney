class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0 ;
        int j=0;
        int count = 0;
        int product = 1;
        if(k<=1){
            return 0;
        }
        while(i<n){
        product*=nums[i];
            while(product>=k){
                product /= nums[j];
                j++;
            }
            count +=(i-j+1);
            i++;
        }
        return count;
    }
};