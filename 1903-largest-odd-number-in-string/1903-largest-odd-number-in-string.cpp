class Solution {
public:
    string largestOddNumber(string num) {
     int n = num.size();
     int start=0;
    
     for(int i=n-1;i>=0;i--){
        if((num[i] - '0')%2!=0){
            return num;
        }
        else{
            num.pop_back();
        }
     }   
     return "";
    
    }
};