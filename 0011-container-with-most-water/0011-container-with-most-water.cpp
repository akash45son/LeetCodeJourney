class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxarea = INT_MIN;
        int left = 0;
        int right = n-1;
        int area;
        while(left<right){
            area = (right - left) * min(height[left], height[right]);
            maxarea = max(area, maxarea);
            if( height[left]<height[right]){
                left++;
            }else{
             right--;
            }
        }
        return maxarea;
    }
};