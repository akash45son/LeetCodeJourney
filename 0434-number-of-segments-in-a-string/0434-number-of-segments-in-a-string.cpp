class Solution {
public:
    int countSegments(string s) {
        string word;
        vector<string> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word += s[i];
            }else{
                if(!word.empty()){
                    ans.push_back(word);
                    word = "";
                }
            }
        }
            if(!word.empty()){
                ans.push_back(word);
            }

        return ans.size();
    }
};