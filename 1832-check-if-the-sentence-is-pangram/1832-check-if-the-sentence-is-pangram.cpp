class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
         if(sentence.size()<26){
            return false;
         }
        else{
        for(char ch='a';ch<='z';ch++){
            mp[ch]++;
        }
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]--;
            
        }
        for(auto x : mp){
            if(x.second>0){
                return false;
            }
        }
         }
        return true;
    }
};