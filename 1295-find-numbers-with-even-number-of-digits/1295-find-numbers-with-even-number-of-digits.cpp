class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0 ;
        int even = 0;
        int odd =0;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0){
                even++;
            }
            count = 0;
        }
        return even;
    }
};