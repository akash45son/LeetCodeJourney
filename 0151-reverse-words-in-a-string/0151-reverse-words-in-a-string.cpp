class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
       vector<string> ans;
       string words = "";
       for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            words += s[i];
        }else{
            if(!words.empty()){
        ans.push_back(words);
        words = "";
            }
        }
        
       }
       if(!words.empty()){
        ans.push_back(words);
       }
       string answer ="";
       int m = ans.size();
       for(int i=m-1;i>=0;i--){
        answer += ans[i];
        if(i!=0){
            answer += ' ';
       }
       }
       return answer;
    }
};