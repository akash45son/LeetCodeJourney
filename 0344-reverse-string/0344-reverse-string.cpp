class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<char> st;
    int n = s.size();
       for(char x : s ){
        st.push(x);
       }
        for(int i=0;i<n;i++){
            s[i] = st.top();
            st.pop();
        }
       }
    
};