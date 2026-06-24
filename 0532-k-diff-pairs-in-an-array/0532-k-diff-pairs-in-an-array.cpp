class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto x:mp){
            int num =x.first;
            if(k==0){
               if(x.second>1){
                count++;
               }
            }else{
            if(mp.count(num+k)){
                count ++;
            }
            }
        }
        return count;
    }
};