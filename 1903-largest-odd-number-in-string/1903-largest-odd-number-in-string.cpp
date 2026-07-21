class Solution {
public:
    string largestOddNumber(string num) {
        int largest = INT_MIN;
        string ans ="";
    for(int i=num.size()-1;i>=0;i--){
        if((num[i]-'0')%2==1){
            return num;
        }else{
            num.pop_back();
        }
    }
    return ans;
    }
};