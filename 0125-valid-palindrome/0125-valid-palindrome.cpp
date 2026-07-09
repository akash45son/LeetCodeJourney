class Solution {
public:
    bool isPalindrome(string s) {
     int n = s.size();
     string ans="";

     for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            ans += tolower(s[i]);
        }
     }
     int start = 0;
     int end = ans.size()-1;
     while(start<=end){
        if(ans[start]!=ans[end]){
            return false;
            
        }
        start++;
        end--;
     }
    return true;
    }
};