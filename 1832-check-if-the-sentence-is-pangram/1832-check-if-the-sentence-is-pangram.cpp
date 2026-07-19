class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;
         if(sentence.size()<26){
            return false;
         }
        else{
        for(int i=0;i<sentence.size();i++){
            st.insert(sentence[i]);
            
        }
       
         }
        return st.size()==26;
    }
};