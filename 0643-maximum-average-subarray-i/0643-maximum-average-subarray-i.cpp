class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int n =nums.size();
        
     for(int i=0;i<k;i++){
        sum += nums[i];
        
     }   
     int maxsum=sum;
     for(int i=0;i<n-k;i++){
        sum = sum-nums[i]+nums[k+i];
        maxsum =max(sum,maxsum);
     }
     double avg = (double)maxsum/k;
     return avg;
    }
};