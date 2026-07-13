class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
      int maximum = *max_element(piles.begin(), piles.end());
      int start = 1;
      int end = maximum;
    while(start<=end){
        int mid = start+ (end-start)/2;
        long long hours = 0;
        for(int j=0;j<n;j++){
            hours += (piles[j]+mid-1)/mid;
        }
        if(hours<=h){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    } 
    return start;
    }
};