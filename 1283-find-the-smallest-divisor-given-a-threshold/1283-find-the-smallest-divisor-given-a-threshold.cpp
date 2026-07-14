class Solution {
public:

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n =nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int answer;
        int start =1;
        int end = maxi;
        while(start<=end){
            int mid = (start+end)/2;
            int ans = 0;
            for(int j=0;j<n;j++){
               ans += (nums[j]+mid-1)/mid;
            }
            if(ans<=threshold){
                answer =mid;
                end=mid-1;
            }else{
                start = mid+1;
            }
        }
        return answer;
    }
};